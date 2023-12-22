create database Academ;
use Academ;


CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    GPA FLOAT
);

CREATE TABLE Courses (
    CourseID INT PRIMARY KEY,
    CourseName VARCHAR(50),
    Difficulty INT,
    Credits INT
);

CREATE TABLE Enrollments (
    EnrollmentID INT PRIMARY KEY,
    StudentID INT,
    CourseID INT,
    Grade FLOAT
);

INSERT INTO Students (StudentID, FirstName, LastName, Age, GPA)
VALUES
    (1, 'Иван', 'Иванов', 20, 3.5),
    (2, 'Мария', 'Петрова', 22, 3.8),
    (3, 'Александр', 'Сидоров', 21, 3.2),
    (4, 'Екатерина', 'Козлова', 23, 3.9),
    (5, 'Дмитрий', 'Федоров', 20, 3.0);

INSERT INTO Courses (CourseID, CourseName, Difficulty, Credits)
VALUES
    (101, 'Mathematics', 4, 3),
    (102, 'Physics', 3, 4),
    (103, 'Literature', 2, 3),
    (104, 'History', 2, 3),
    (105, 'Biology', 3, 4);

INSERT INTO Enrollments (EnrollmentID, StudentID, CourseID, Grade)
VALUES
    (1, 1, 101, 3.7),
    (2, 1, 102, 4.0),
    (3, 2, 101, 3.9),
    (4, 3, 103, 3.5),
    (5, 3, 105, 3.2),
    (6, 4, 102, 3.8),
    (7, 4, 104, 4.0),
    (8, 5, 105, 3.1),
    (9, 5, 101, 3.0);

select AVG(s.GPA) as GPA from Students s join Enrollments e ON s.StudentID = e.StudentID where e.CourseID = 101;

select MAX(s.Age) as MaxAge from Students s join Enrollments e on s.StudentID = e.StudentID where e.Grade > 3.5;

select COUNT(*) from Courses where Difficulty > 3;

select c.CourseName, AVG(e.Grade) as GradeAVG from Courses c join Enrollments e on c.CourseID = e.CourseID group by c.CourseName;

select CourseName from Courses where Difficulty = (select MAX(Difficulty) from Courses);
