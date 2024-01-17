create database Academy;

use Academy;

create table Faculties(
Id int primary key identity(1,1),
Name nvarchar(100) not null unique
)
create table Departments(
id int primary key identity(1,1),
Financing money not null check (Financing > 0) default 0,
Name nvarchar(100) check (Name <> '') unique,
FacultyId int not null,
foreign key (FacultyId) references Faculties(Id)
)
create table Groups(
id int primary key identity(1,1),
Name nvarchar(10),
Year int not null,
DepartmentId int not null,
foreign key (DepartmentId) references Departments(Id)
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
create table Lectures(
id int primary key identity(1,1),
DayOfWeek int not null check (DayOfWeek >= 1 and DayOfWeek <= 7),
LectureRoom nvarchar(max) not null check(LectureRoom <> ''),
SubjectId int not null,
TeacherId int not null,
foreign key (SubjectId) references Subjects(Id),
foreign key (TeacherId) references Teachers(Id)
)
create table GroupsLectures(
Id int primary key identity(1,1),
GroupId int not null,
LectureId int not null,
foreign key(GroupId) references Groups(Id),
foreign key(LectureId) references Lectures(Id),
)

insert into Faculties (Name) values ('Computer Science');

insert into Departments (Financing, Name, FacultyId) values ('100000', 'Software Development', 1);

insert into Groups (Name, Year, DepartmentId) values ('3_22_11', '2024', 1);

insert into Subjects (Name) values ('Database Management');

insert into Teachers (Name, Salary, Surname) values ('Jack', 4000,'Underhill');
insert into Teachers (Name, Salary, Surname) values ('Dave', 3500,'McQueen');

insert into Lectures (DayOfWeek, LectureRoom, SubjectId, TeacherId) values (1,'D201', 1, 1);
insert into Lectures (DayOfWeek, LectureRoom, SubjectId, TeacherId) values (1,'A2', 1, 2);

insert into GroupsLectures values (1,1);
insert into GroupsLectures values (1,2);

select count(*) as TeachersCount 
from Teachers t join Departments d on t.Id = d.FacultyId 
where d.Name = 'Software Development';

select count (*) as LectureCount 
from Lectures l join Teachers t on l.TeacherId = t.Id 
where t.Name = 'Dave' and t.Surname = 'McQueen';

select count(*) as LectureCount 
from Lectures 
where LectureRoom = 'D201';

select LectureRoom, count (*) as LectureCount 
from Lectures 
group by LectureRoom;

select count (distinct gl.GroupId) as StudentsCount 
from GroupsLectures gl join Lectures l on gl.LectureId = l.Id join Teachers t on l.TeacherId = t.Id 
where t.Name = 'Jack' and t.Surname = 'Underhill';

select avg(Salary) as AverageSalary 
from Teachers t join Lectures l on t.Id = l.TeacherId join Subjects s on l.SubjectId = s.Id join Departments d on s.Id = d.id join Faculties f on d.FacultyId = f.Id 
where f.Name = 'Computer Science';

select min(StudentsCount) as MinStudentsCount, max(StudentsCount) as MaxStudentsCount
from (
    select gl.GroupId, count(gl.GroupId) as StudentsCount
    from GroupsLectures gl
    group by gl.GroupId
) as GroupStudentsCount;

select avg(Financing) as AverageFinancing
from Departments;

select concat(t.Name, ' ', t.Surname) as FullName, count(*) as SubjectsCount
from Teachers t
join Lectures l on t.Id = l.TeacherId
join Subjects s on l.SubjectId = s.Id
group by t.Id, t.Name, t.Surname;

select DayOfWeek, count(*) as LectureCount
from Lectures
group by DayOfWeek;

select LectureRoom, count(distinct d.Id) as DepartmentsCount
from Lectures l
join Subjects s on l.SubjectId = s.Id
join Departments d on s.Id = d.Id
group by LectureRoom;

select f.Name as FacultyName, count(distinct s.Id) as SubjectsCount
from Subjects s
join Lectures l on s.Id = l.SubjectId
join Teachers t on l.TeacherId = t.Id
join Departments d on t.Id = d.Id
join Faculties f on d.FacultyId = f.Id
group by f.Name;

select concat(t.Name, ' ', t.Surname) as TeacherFullName, l.LectureRoom, count(*) as LectureCount
from Lectures l
join Teachers t on l.TeacherId = t.Id
group by t.Id, concat(t.Name, ' ', t.Surname), l.LectureRoom;
