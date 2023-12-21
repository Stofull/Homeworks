create database Academy;

use Academy;

create table Groups(
Id int primary key identity(1,1),
Name nvarchar(10) not null unique,
Rating int check (Rating >= 0 and Rating <= 5) not null,
Year int check (Year >= 1 and Year <= 5) not null,
)

create table Departments(
Id int primary key identity(1,1),
Financing smallmoney default 0 not null check (Financing >= 0),
Name nvarchar(100) not null unique,
)

create table Faculties(
Id int primary key identity(1,1),
Name nvarchar(100) not null unique,
)

create table Teachers(
Id int primary key identity(1,1),
EmploymentDate date not null,
Name nvarchar(max) not null,
Premium smallmoney default 0 not null check (Premium >= 0),
Salary smallmoney not null check (Salary >= 0 and Salary != 0),
Surname nvarchar(max) not null,
)

insert into Groups(Name, Rating, Year) values ('FBAS_3_22_11','5','3')
insert into Departments(Financing, Name) values ('3','Step')
insert into Faculties(Name) values ('Software')
insert into Teachers(EmploymentDate, Name, Premium, Salary, Surname) values ('11.11.2011','Yusif','2500','8000','Bayramov')


select *
from Groups
select *
from Departments
select *
from Faculties
select *
from Teachers