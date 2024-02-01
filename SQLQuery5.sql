create database Academy;

use Academy;

create table Curators(
Id int primary key identity(1,1) not null,
Name nvarchar(max) not null,
Surname nvarchar(max) not null
);

create table Faculties(
Id int primary key identity(1,1) not null,
Financing money not null default 0 check(Financing > 0),
Name nvarchar(100) not null unique check(Name <> '')
);

create table Departments(
Id int primary key identity(1,1) not null,
Financing money not null default 0 check (Financing > 0),
Name nvarchar(100) not null unique check (Name <> ''),
FacultyId int not null,
foreign key (FacultyId) references Faculties(Id)
);

create table Groups(
Id int primary key identity(1,1) not null,
Name nvarchar(10) not null unique check (Name <> ''),
Year int not null check (Year >= 1 and Year <= 5),
DepartmentId int not null,
foreign key (DepartmentId) references Departments(Id)
);

create table GroupsCurators(
Id int primary key identity (1,1) not null,
CuratorId int not null,
GroupId int not null
);

create table GroupsLectures(
Id int primary key identity (1,1) not null,
GroupId int not null,
LectureId int not null
);

create table Lectures(
Id int primary key identity (1,1) not null,
LectureRoom nvarchar(max) not null check(LectureRoom <> ''),
SubjectId int not null,
TeacherId int not null
);

create table Subjects(
Id int primary key identity (1,1) not null,
Name nvarchar(100) not null unique check(Name <> '')
);

create table Teachers(
Id int primary key identity(1,1) not null,
Name nvarchar(max) not null check(Name <> ''),
Salary money not null check (Salary > 0 and Salary != 0),
Surname nvarchar(max) not null check(Surname <> '')
);

insert into Curators (Name, Surname)
values ('Samantha', 'Adams'),
       ('Fuad', 'Zeynalov'),
       ('Nihad', 'Salayev');

insert into Faculties (Financing, Name)
values (100000, 'Computer Science'),
       (150000, 'Engineering'),
       (120000, 'Business Administration');

insert into Departments (Financing, Name, FacultyId)
values (50000, 'Computer Engineering', 1),
       (40000, 'Software Development', 1),
       (60000, 'Electrical Engineering', 2);

insert into Groups (Name, Year, DepartmentId)
values ('P107', 1, 1),
       ('B103', 1, 2),
       ('C102', 2, 3);

insert into GroupsCurators (CuratorId, GroupId)
values (1, 1),
       (2, 2),
       (3, 3);

insert into GroupsLectures (GroupId, LectureId)
values (1, 1),
       (2, 2),
       (3, 3);

insert into Lectures (LectureRoom, SubjectId, TeacherId)
values ('Room A', 1, 1),
       ('Room B', 2, 2),
       ('Room C', 3, 3);

insert into Subjects (Name)
values ('Mathematics'),
       ('Computer Science'),
       ('Database Theory');

insert into Teachers (Name, Salary, Surname)
values ('Alice', 50000, 'Anderson'),
       ('Bob', 60000, 'Brown'),
       ('Charlie', 55000, 'Clark');


--Task1
select Teachers.Name, Teachers.Surname, Groups.Name as GroupName
from Teachers
cross join Groups;
--Task2
select F.Name as FacultyName, D.Name as DepartmentName, F.Financing as FacultyFinancing, D.Financing as DepartmentFinancing
from Faculties F
inner join Departments D on F.Id = D.FacultyId
where D.Financing > F.Financing;
--Task3
select C.Surname as CuratorSurname, G.Name as GroupName
from Curators C
inner join GroupsCurators GC on C.Id = GC.CuratorId
inner join Groups G on GC.GroupId = G.Id;
-- Task4
select distinct T.Name, T.Surname
from Teachers T
join Lectures L on T.Id = L.TeacherId
join GroupsLectures GL on L.Id = GL.LectureId
join Groups G on GL.GroupId = G.Id
where G.Name = 'P107';
--Task5
select T.Surname as TeacherSurname, F.Name as FacultyName
from Teachers T
join Lectures L on T.Id = L.TeacherId
join Subjects S on L.SubjectId = S.Id
join Departments D on S.Id = D.Id
join Faculties F on D.FacultyId = F.Id;
--Task6
select D.Name as DepartmentName, G.Name as GroupName
from Departments D
join Groups G on D.Id = G.DepartmentId;
--Task7
select S.Name as SubjectName
from Teachers T
join Lectures L on T.Id = L.TeacherId
join Subjects S on L.SubjectId = S.Id
where T.Name = 'Samantha' and T.Surname = 'Adams';
--Task8
select D.Name as DepartmentName
from Departments D
join Subjects S on D.Id = S.Id
join Lectures L on S.Id = L.SubjectId
where S.Name = 'Database Theory';
--Task9
select G.Name as GroupName
from Groups G
join Departments D on G.DepartmentId = D.Id
join Faculties F on D.FacultyId = F.Id
where F.Name = 'Computer Science';
--Task10
select G.Name as GroupName, F.Name as FacultyName
from Groups G
join Departments D on G.DepartmentId = D.Id
join Faculties F on D.FacultyId = F.Id
where G.Year = 5;
--Task11
select T.Name, T.Surname, S.Name as SubjectName, G.Name as GroupName
from Teachers T
join Lectures L on T.Id = L.TeacherId
join Subjects S on L.SubjectId = S.Id
join GroupsLectures GL on L.Id = GL.LectureId
join Groups G on GL.GroupId = G.Id
where L.LectureRoom = 'B103';
