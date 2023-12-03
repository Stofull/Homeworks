using BookCenter.Messages;
using BookCenter.Models;
using BookCenter.Services.Classes;
using BookCenter.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;

namespace BookCenter.ViewModels;

class OrderViewModel : ViewModelBase
{
    private readonly INavigationService _navigationService;
    private readonly IMessenger _messenger;
    public Result SelectedBook { get; set; }

    public OrderViewModel(INavigationService navigationService, IMessenger messenger)
    {
        _navigationService = navigationService;
        _messenger = messenger;

        _messenger.Register<DataMessage>(this, message =>
        {
            if (message.Data != null)
            {
                SelectedBook = message.Data as Result;
            }
        });
    }
    public RelayCommand ConfirmBook
    {
        get => new RelayCommand(() =>
        {
            MessageBox.Show("Заказ успешно подтвержден!", "Успех", MessageBoxButton.OK, MessageBoxImage.Information);
            _navigationService.NavigateTo<SearchViewModel>();
        });
    }
    public RelayCommand GoBackCommand
    {
        get => new(
            () =>
            {
                _navigationService.NavigateTo<InfoViewModel>();
            }
        );
    }
}