﻿using BookCenter.Messages;
using BookCenter.Models;
using BookCenter.Services.Classes;
using BookCenter.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;

namespace BookCenter.ViewModels;
class InfoViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    private readonly IDataService _dataService;

    public Result SelectedBook { get; set; }
    public InfoViewModel(INavigationService navigationService, IMessenger messenger, IDataService dataService)
    {
        _navigationService = navigationService;
        _messenger = messenger;
        _dataService = dataService;

        _messenger.Register<DataMessage>(this, message =>
        {
            if (message.Data != null)
            {
                SelectedBook = message.Data as Result;
            }
        });
    }
    public RelayCommand OrderCommand
    {
        get => new(
        () =>
        {
            _dataService.SendData(SelectedBook);
            _navigationService.NavigateTo<OrderViewModel>();
        }
        );
    }
    public RelayCommand GoBackCommand{ get => new(
            () =>
            {
                _navigationService.NavigateTo<SearchViewModel>();
            }
        ); }
}       
        


