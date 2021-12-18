
//CREATE TABLE

CREATE TABLE EmployeeDetails (
    empId INT,
    Last_name VARCHAR(255),
    Full_name VARCHAR(255),
    managerId INT,
    date_of_joining DATE
);

// insert some data

INSERT INTO EmployeeDetails (empId,full_name,managerId,date_of_joining) VALUES(
	1,'Jhon Snow',321,'2014-01-31'
 );

INSERT INTO EmployeeDetails (empId,full_name,managerId,date_of_joining) VALUES(
    2,'Walter White',986,'2015-01-30'
);

INSERT INTO EmployeeDetails (empId,full_name,managerId,date_of_joining) VALUES(
    2,'Kuldeep Rana',876,'2016-11-27'
);


CREATE TABLE EmplployeeSalary (
    empId INT,
    project VARCHAR(255),
    salary INT
);

INSERT INTO EmplployeeSalary (empId,project,salary) VALUES(
    121,'P1',8000
);

INSERT INTO EmplployeeSalary(empId,project,salary) VALUES(
    321,'P2',1000
);


INSERT INTO EmplployeeSalary(empId,project,salary) VALUES(
    421,'P1',12000
);

UPDATE EmployeeDetails SET empId = 121 WHERE managerId = 321;

--  Q1: write a sql query to fetch the count of employees working in project P1
Select count(*) from EmployeeDetails where empId in (select empId from EmplployeeSalary where project = 'P1');


-- Q2: write a sql query to fetch project-wise count of employees sorted by project count desc order
 SELECT Project, COUNT(*) AS proj_count FROM EmplployeeSalary GROUP BY Project ORDER BY proj_count DESC;