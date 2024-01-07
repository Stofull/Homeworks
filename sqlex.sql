create database Academy;

use Academy;

create table Departments(
id int primary key identity(1,1),
Financing money not null check (Financing > 0) default 0,
Name nvarchar(100) check (Name <> '') unique,
FacultId int not null,
foreign key (FacultyId) references Faculties(Id)
)
create table Faculties(
Id int primary key identity(1,1),
Name nvarchar(100) not null unique
)
create table Groups(
id int primary key identity(1,1),
Name nvarchar(10),
Year int not null,
DepartmentId int not null,
foreign key (DepartmentId) references Departments(Id)
)
create table GroupsLectures(
Id int primary key identity(1,1),
GroupdId int not null,
LectureId int not null,
foreign (GroupId) references Groups(Id),
foreign (LectureId) references Lectures(Id),
)
create table Lectures(
id int primary key identity(1,1),
DayOfWeek int not null check (DayOfWeek >= 1 and DayOfWeek <= 7),
LectureRoom nvarchar(max) not null check(LectureRoom <> ''),
SubjectId int not null,
TeacherId int not null,
foreign key (SubjectId) references Subjects(Id),
foreign key (TeacherId) references Teachers(Id)
)
create table Subjects(
Id int primary key identity(1,1),
Name nvarchar(100) not null check(Name <> '')
)
create table Teachers(
Id int primary key identity(1,1),
Name nvarchar(max) not null check(Name <> ''),
Salary money not null check(Salary > 0),
Surname nvarchar(max) not null check(Surname <> '')
)




