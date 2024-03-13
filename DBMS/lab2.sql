SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
MARKS                          TABLE                                            
STUDENT                        TABLE                                            

SQL> drop table marks;

Table dropped.

SQL> drop table student;

Table dropped.

SQL> create table student(Student_id char(5) constraint s1 primary key, Last varchar(15) not null, first varchar(15) not null, street varchar(25), City varchar(15) constraint s2 DEFAULT'NJ', zip varchar(5), StartTerm char(4), Birthday date, FacultyID number(3), MajorID number(3), Phone char(10));
create table student(Student_id char(5) constraint s1 primary key, Last varchar(15) not null, first varchar(15) not null, street varchar(25), City varchar(15) constraint s2 DEFAULT'NJ', zip varchar(5), StartTerm char(4), Birthday date, FacultyID number(3), MajorID number(3), Phone char(10))
                                                                                                                                                               *
ERROR at line 1:
ORA-02253: constraint specification not allowed here 

SQL> ed
Wrote file afiedt.buf

  1* create table student(Student_id char(5) constraint s1 primary key, Last varchar(15) not null, first varchar(15) not null, street varchar(25), City varchar(15) DEFAULT'NJ', zip varchar(5), StartTerm char(4), Birthday date, FacultyID number(3), MajorID number(3), Phone char(10))
SQL> /

Table created.

SQL> create table Faculty (Faculty_ID number(3) constraint f1 primary key, name varchar(15) not null, RoomID number(2), phone char(3)unique, DeptID number(1));

Table created.

SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> desc faculty;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 FACULTY_ID                                NOT NULL NUMBER(3)
 NAME                                      NOT NULL VARCHAR2(15)
 ROOMID                                             NUMBER(2)
 PHONE                                              CHAR(3)
 DEPTID                                             NUMBER(1)

SQL> spool off;
SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> desc faculty;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 FACULTY_ID                                NOT NULL NUMBER(3)
 NAME                                      NOT NULL VARCHAR2(15)
 ROOMID                                             NUMBER(2)
 PHONE                                              CHAR(3)
 DEPTID                                             NUMBER(1)

SQL> create table crsection (CrID number(4) constraint c1 primary key, courseID varchar(6) not null, section char(4) not null, TermID char(4) not null, FacultyID number(3), day varchar(2), Start_Time varchar(5), End_Time varchar(5), RoomID number(2), MaxCount number(2) constraint c2 check(MaxCount>0));

Table created.

SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> ed
Wrote file afiedt.buf

  1* create table course(CourseID varchar(6) constraint c_1 primary key, Title varchar(20) unique, credits number(1) constraint c_2 check(credits>=0 AND credits<=4), PreReq varchar(6))
SQL> /

Table created.

SQL> desc course;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 COURSEID                                  NOT NULL VARCHAR2(6)
 TITLE                                              VARCHAR2(20)
 CREDITS                                            NUMBER(1)
 PREREQ                                             VARCHAR2(6)

SQL> create table registration (StudentID char(5), CsID number, Midterm char constraint r1 check(Midterm IN ('A', 'B', 'C', 'D', 'F', 'W')), Final char constraint r2 check(final IN ('A', 'B', 'C', 'D', 'I', 'F', 'W')), RegStatus char constraint r3 check(RegStatus IN ('X', 'R', 'W')));

Table created.

SQL> create table room (RoomType char constraint r_1 Primary key, RoomDesc varchar(9));

Table created.

SQL> create table location (RoomID number(2) constraint l1 primary key, building varchar(7) not null, roomno char(3) not null unique, capacity number(2) check(capacity>0), RoomType char);

Table created.

SQL> create table term(TermID char(4) constraint t1 primary key, termdesc varchar(11), StartDate date, EndDate date);

Table created.

SQL> create table department(DeptID number(1) constraint d1 primary key, DeptName varchar(20), FacultyID number(3) );

Table created.

SQL> create table major(MajorId number(3) constraint m1 primary key, MajorDesc varchar(25));

Table created.

SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
COURSE                         TABLE                                            
CRSECTION                      TABLE                                            
DEPARTMENT                     TABLE                                            
FACULTY                        TABLE                                            
LOCATION                       TABLE                                            
MAJOR                          TABLE                                            
REGISTRATION                   TABLE                                            
ROOM                           TABLE                                            
STUDENT                        TABLE                                            
TERM                           TABLE                                            

10 rows selected.

SQL> alter table student add constraint s2 foreign key(StartTerm) references term(TermID) on delete cascade;

Table altered.

SQL> alter table student add constraint s3 foreign key(FacultyID) references faculty(faculty_ID) on delete cascade;

Table altered.

SQL> alter table student add constraint s4 foreign key(MajorID) references major(majorID) on delete cascade;

Table altered.

SQL> alter table faculty add constraint f2 foreign key(roomID) references location(RoomID) on delete cascade;

Table altered.

SQL> alter table faculty add constraint f3 foreign key(DeptID) references department(DeptID) on delete cascade;

Table altered.

SQL> alter table crsection add constraint c3 foreign key(courseID) references course(courseID) on delete cascade;

Table altered.

SQL> alter table crsection add constraint c4 foreign key(termID) references term(termID) on delete cascade;

Table altered.

SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
COURSE                         TABLE                                            
CRSECTION                      TABLE                                            
DEPARTMENT                     TABLE                                            
FACULTY                        TABLE                                            
LOCATION                       TABLE                                            
MAJOR                          TABLE                                            
REGISTRATION                   TABLE                                            
ROOM                           TABLE                                            
STUDENT                        TABLE                                            
TERM                           TABLE                                            

10 rows selected.

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                          CHAR(5)
 CSID                                               NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> alter table registration add constraint r4 primary key(StudentID,CSID);

Table altered.

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                 NOT NULL CHAR(5)
 CSID                                      NOT NULL NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> desc faculty;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 FACULTY_ID                                NOT NULL NUMBER(3)
 NAME                                      NOT NULL VARCHAR2(15)
 ROOMID                                             NUMBER(2)
 PHONE                                              CHAR(3)
 DEPTID                                             NUMBER(1)

SQL> alter table crsection add constraint c5 foreign key(facultyid) references faculty(faculty_id);

Table altered.

SQL> alter table crsection add constraint c6 foreign key (roomid) references location(roomid);

Table altered.

SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> desc course;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 COURSEID                                  NOT NULL VARCHAR2(6)
 TITLE                                              VARCHAR2(20)
 CREDITS                                            NUMBER(1)
 PREREQ                                             VARCHAR2(6)

SQL> alter table course add constraint c_3 foreign key(prereq) references course(courseid) ;

Table altered.

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                 NOT NULL CHAR(5)
 CSID                                      NOT NULL NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> alter table registration add constraint r5 foreign key(studentid) references student(student_id);

Table altered.
 
SQL> alter table registration add constraint r6 foreign key(csid) references crsection(crid);

Table altered.

SQL> desc location;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMID                                    NOT NULL NUMBER(2)
 BUILDING                                  NOT NULL VARCHAR2(7)
 ROOMNO                                    NOT NULL CHAR(3)
 CAPACITY                                           NUMBER(2)
 ROOMTYPE                                           CHAR(1)

SQL> desc room;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMTYPE                                  NOT NULL CHAR(1)
 ROOMDESC                                           VARCHAR2(9)

SQL> alter table location add constraint l2 foreign key(roomtype) references room(roomtype);

Table altered.

SQL> desc department;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 DEPTID                                    NOT NULL NUMBER(1)
 DEPTNAME                                           VARCHAR2(20)
 FACULTYID                                          NUMBER(3)

SQL> alter table department add constraint d2 foreign key(facultyid) references faculty(faculty_id);

Table altered.

SQL> desc course;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 COURSEID                                  NOT NULL VARCHAR2(6)
 TITLE                                              VARCHAR2(20)
 CREDITS                                            NUMBER(1)
 PREREQ                                             VARCHAR2(6)

SQL> insert into course values('&coursid','&title',&credits, '&prereq');
Enter value for coursid: EN100
Enter value for title: Basic English
Enter value for credits: 0
Enter value for prereq: 
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('EN100','Basic English',0, '')

1 row created.

SQL> /
Enter value for coursid: LA123 
Enter value for title: English Literature
Enter value for credits: 3
Enter value for prereq: EN100
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('LA123 ','English Literature',3, 'EN100')

1 row created.

SQL> /
Enter value for coursid: CIS253
Enter value for title: Database Systems
Enter value for credits: 3
Enter value for prereq: 
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('CIS253','Database Systems',3, '')

1 row created.

SQL> /
Enter value for coursid: CIS265
Enter value for title: Systems Analysis
Enter value for credits: 3
Enter value for prereq: CIS253
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('CIS265','Systems Analysis',3, 'CIS253')

1 row created.

SQL> /
Enter value for coursid: MA150
Enter value for title: College Algebra
Enter value for credits: 3
Enter value for prereq: 
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('MA150','College Algebra',3, '')

1 row created.

SQL> /
Enter value for coursid: AC101
Enter value for title: Accounting 
Enter value for credits: 3
Enter value for prereq: 
old   1: insert into course values('&coursid','&title',&credits, '&prereq')
new   1: insert into course values('AC101','Accounting ',3, '')

1 row created.

SQL> select* from course;

COURSE TITLE                   CREDITS PREREQ                                   
------ -------------------- ---------- ------                                   
EN100  Basic English                 0                                          
LA123  English Literature            3 EN100                                    
CIS253 Database Systems              3                                          
CIS265 Systems Analysis              3 CIS253                                   
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

6 rows selected.

SQL> desc room;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMTYPE                                  NOT NULL CHAR(1)
 ROOMDESC                                           VARCHAR2(9)

SQL> insert into room values('&roomtype','&roomdesc');
Enter value for roomtype: L
Enter value for roomdesc: Lab
old   1: insert into room values('&roomtype','&roomdesc')
new   1: insert into room values('L','Lab')

1 row created.

SQL> /
Enter value for roomtype: C
Enter value for roomdesc: Classroom
old   1: insert into room values('&roomtype','&roomdesc')
new   1: insert into room values('C','Classroom')

1 row created.

SQL> /
Enter value for roomtype: O
Enter value for roomdesc: Office
old   1: insert into room values('&roomtype','&roomdesc')
new   1: insert into room values('O','Office')

1 row created.

SQL> select* from room
  2  ;

R ROOMDESC                                                                      
- ---------                                                                     
L Lab                                                                           
C Classroom                                                                     
O Office                                                                        

SQL> desc term;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 TERMID                                    NOT NULL CHAR(4)
 TERMDESC                                           VARCHAR2(11)
 STARTDATE                                          DATE
 ENDDATE                                            DATE

SQL> insert into term values('&termid','&termdesc','&startdate','&endate');
Enter value for termid: SP02
Enter value for termdesc: Spring 2002
Enter value for startdate: 28-APR-02
Enter value for endate: 16-AUG-02
old   1: insert into term values('&termid','&termdesc','&startdate','&endate')
new   1: insert into term values('SP02','Spring 2002','28-APR-02','16-AUG-02')

1 row created.

SQL> /
Enter value for termid: FL02
Enter value for termdesc: Fall 2002
Enter value for startdate: 08-SEP-02
Enter value for endate: 20-DEC-02
old   1: insert into term values('&termid','&termdesc','&startdate','&endate')
new   1: insert into term values('FL02','Fall 2002','08-SEP-02','20-DEC-02')

1 row created.

SQL> /
Enter value for termid: WN03
Enter value for termdesc: Winter 2003
Enter value for startdate: 05-JAN-03
Enter value for endate: 18-APR-03
old   1: insert into term values('&termid','&termdesc','&startdate','&endate')
new   1: insert into term values('WN03','Winter 2003','05-JAN-03','18-APR-03')

1 row created.

SQL> /
Enter value for termid: SP03
Enter value for termdesc: Spring 2003
Enter value for startdate: 27-APR-03
Enter value for endate: 15-AUG-03
old   1: insert into term values('&termid','&termdesc','&startdate','&endate')
new   1: insert into term values('SP03','Spring 2003','27-APR-03','15-AUG-03')

1 row created.

SQL> /
Enter value for termid: FL03
Enter value for termdesc: Fall 2003
Enter value for startdate: 07-SEP-03
Enter value for endate: 19-DEC-03
old   1: insert into term values('&termid','&termdesc','&startdate','&endate')
new   1: insert into term values('FL03','Fall 2003','07-SEP-03','19-DEC-03')

1 row created.

SQL> select* from term;

TERM TERMDESC    STARTDATE ENDDATE                                              
---- ----------- --------- ---------                                            
SP02 Spring 2002 28-APR-02 16-AUG-02                                            
FL02 Fall 2002   08-SEP-02 20-DEC-02                                            
WN03 Winter 2003 05-JAN-03 18-APR-03                                            
SP03 Spring 2003 27-APR-03 15-AUG-03                                            
FL03 Fall 2003   07-SEP-03 19-DEC-03                                            

SQL> desc major;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 MAJORID                                   NOT NULL NUMBER(3)
 MAJORDESC                                          VARCHAR2(25)

SQL> insert into major values(&majorid,'&majordesc');
Enter value for majorid: 100
Enter value for majordesc: AAS-Accounting
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(100,'AAS-Accounting')

1 row created.

SQL> /
Enter value for majorid: 200
Enter value for majordesc: AAS-Computer Science
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(200,'AAS-Computer Science')

1 row created.

SQL> /
Enter value for majorid: 300
Enter value for majordesc: AAS-Telecommunications
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(300,'AAS-Telecommunications')

1 row created.

SQL> /
Enter value for majorid: 400
Enter value for majordesc: BS-Accounting
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(400,'BS-Accounting')

1 row created.

SQL> /
Enter value for majorid: 500
Enter value for majordesc: BS-Computer Science
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(500,'BS-Computer Science')

1 row created.

SQL> /
Enter value for majorid: 600
Enter value for majordesc: BS-Telecommunications
old   1: insert into major values(&majorid,'&majordesc')
new   1: insert into major values(600,'BS-Telecommunications')

1 row created.

SQL> select* from major;

   MAJORID MAJORDESC                                                            
---------- -------------------------                                            
       100 AAS-Accounting                                                       
       200 AAS-Computer Science                                                 
       300 AAS-Telecommunications                                               
       400 BS-Accounting                                                        
       500 BS-Computer Science                                                  
       600 BS-Telecommunications                                                

6 rows selected.

SQL> desc department;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 DEPTID                                    NOT NULL NUMBER(1)
 DEPTNAME                                           VARCHAR2(20)
 FACULTYID                                          NUMBER(3)

SQL> desc location;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMID                                    NOT NULL NUMBER(2)
 BUILDING                                  NOT NULL VARCHAR2(7)
 ROOMNO                                    NOT NULL CHAR(3)
 CAPACITY                                           NUMBER(2)
 ROOMTYPE                                           CHAR(1)

SQL> insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype');
Enter value for roomid: 11
Enter value for building: Gandhi
Enter value for roomno: 101
Enter value for capacity: 2
Enter value for roomtype: O
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(11,'Gandhi','101',2,'O')

1 row created.

SQL> /
Enter value for roomid: 12
Enter value for building: Gandhi
Enter value for roomno: 103
Enter value for capacity: 2
Enter value for roomtype: O
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(12,'Gandhi','103',2,'O')

1 row created.

SQL> /
Enter value for roomid: 13
Enter value for building: Kennedy
Enter value for roomno: 202
Enter value for capacity: 35
Enter value for roomtype: L
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(13,'Kennedy','202',35,'L')

1 row created.

SQL> /
Enter value for roomid: 14
Enter value for building: Kennedy
Enter value for roomno: 204
Enter value for capacity: 50
Enter value for roomtype: L
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(14,'Kennedy','204',50,'L')

1 row created.

SQL> /
Enter value for roomid: 15
Enter value for building: Nehru
Enter value for roomno: 301
Enter value for capacity: 50
Enter value for roomtype: C
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(15,'Nehru','301',50,'C')

1 row created.

SQL> /
Enter value for roomid: 16
Enter value for building: Nehru
Enter value for roomno: 309
Enter value for capacity: 45
Enter value for roomtype: C
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(16,'Nehru','309',45,'C')

1 row created.

SQL> /
Enter value for roomid: 17
Enter value for building: Gandhi
Enter value for roomno: 105
Enter value for capacity: 2
Enter value for roomtype: O
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(17,'Gandhi','105',2,'O')

1 row created.

SQL> /
Enter value for roomid: 18
Enter value for building: Kennedy
Enter value for roomno: 206
Enter value for capacity: 40
Enter value for roomtype: L
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(18,'Kennedy','206',40,'L')

1 row created.

SQL> /
Enter value for roomid: 19
Enter value for building: Kennedy
Enter value for roomno: 210
Enter value for capacity: 30
Enter value for roomtype: L
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(19,'Kennedy','210',30,'L')

1 row created.

SQL> /
Enter value for roomid: 20
Enter value for building: Gandhi
Enter value for roomno: 107
Enter value for capacity: 2
Enter value for roomtype: O
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(20,'Gandhi','107',2,'O')

1 row created.

SQL> /
Enter value for roomid: 21
Enter value for building: Gandhi
Enter value for roomno: 109
Enter value for capacity: 2
Enter value for roomtype: O
old   1: insert into location values(&roomid,'&building','&roomno',&capacity,'&roomtype')
new   1: insert into location values(21,'Gandhi','109',2,'O')

1 row created.

SQL> select* from location;

    ROOMID BUILDIN ROO   CAPACITY R                                             
---------- ------- --- ---------- -                                             
        11 Gandhi  101          2 O                                             
        12 Gandhi  103          2 O                                             
        13 Kennedy 202         35 L                                             
        14 Kennedy 204         50 L                                             
        15 Nehru   301         50 C                                             
        16 Nehru   309         45 C                                             
        17 Gandhi  105          2 O                                             
        18 Kennedy 206         40 L                                             
        19 Kennedy 210         30 L                                             
        20 Gandhi  107          2 O                                             
        21 Gandhi  109          2 O                                             

11 rows selected.

SQL> desc department;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 DEPTID                                    NOT NULL NUMBER(1)
 DEPTNAME                                           VARCHAR2(20)
 FACULTYID                                          NUMBER(3)

SQL> insert into department values(&deptid,'&deptname',&facultyid);
Enter value for deptid: 1
Enter value for deptname: Computer Science
Enter value for facultyid: 
old   1: insert into department values(&deptid,'&deptname',&facultyid)
new   1: insert into department values(1,'Computer Science',)
insert into department values(1,'Computer Science',)
                                                   *
ERROR at line 1:
ORA-00936: missing expression 

SQL> insert into department values(&deptid,'&deptname',&facultyid);
Enter value for deptid: 1
Enter value for deptname: Computer Science
Enter value for facultyid: 111
old   1: insert into department values(&deptid,'&deptname',&facultyid)
new   1: insert into department values(1,'Computer Science',111)
insert into department values(1,'Computer Science',111)
*
ERROR at line 1:
ORA-02291: integrity constraint (CSE1164.D2) violated - parent key not found 

SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 STATE                                              VARCHAR2(25)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> desc department;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 DEPTID                                    NOT NULL NUMBER(1)
 DEPTNAME                                           VARCHAR2(20)
 FACULTYID                                          NUMBER(3)

SQL> select* from department;

    DEPTID DEPTNAME              FACULTYID                                      
---------- -------------------- ----------                                      
         1 Computer Science            111                                      
         2 Telecommunications          222                                      
         3 Accounting                  333                                      
         4 Math and Science            444                                      
         5 Liberal Arts                555                                      

SQL> desc faculty;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 FACULTY_ID                                NOT NULL NUMBER(3)
 NAME                                      NOT NULL VARCHAR2(15)
 ROOMID                                             NUMBER(2)
 PHONE                                              CHAR(3)
 DEPTID                                             NUMBER(1)

SQL> select* from faculty;

FACULTY_ID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       111 Jones                   11 525          1                            
       222 Williams                20 533          2                            
       123 Mobley                  11 529          1                            
       235 Vajpayee                12 577          2                            
       345 sen                     12 579          3                            
       444 Rivera                  21 544          4                            
       555 Chang                   17 587          5                            
       333 Collins                 17 599          3                            

8 rows selected.

SQL> select* from student;

no rows selected

SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 STATE                                              VARCHAR2(25)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> alter table student modify(state varchar(25) DEFAULT 'NJ');

Table altered.

SQL> insert into student values('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone');
Enter value for student_id: 00100
Enter value for last: Diaz
Enter value for first: Jose
Enter value for street: 1 Ford Avenue#7
Enter value for city: Hill
Enter value for state: 
Enter value for zip: 08863
Enter value for startterm: WN03
Enter value for birthday: 02-dec-1983
Enter value for facultyid: 123
Enter value for majorid: 100
Enter value for phone: 9735551111
old   1: insert into student values('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00100','Diaz','Jose','1 Ford Avenue#7','Hill','','08863','WN03','02-dec-1983',123,100,'9735551111')

1 row created.

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
                          08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                

SQL> update student set state='NJ' where student_id='00100';

1 row updated.

SQL> spool off
SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
COURSE                         TABLE                                            
CRSECTION                      TABLE                                            
DEPARTMENT                     TABLE                                            
FACULTY                        TABLE                                            
LOCATION                       TABLE                                            
MAJOR                          TABLE                                            
REGISTRATION                   TABLE                                            
ROOM                           TABLE                                            
STUDENT                        TABLE                                            
TERM                           TABLE                                            

10 rows selected.

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                

SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 STATE                                              VARCHAR2(25)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone');
Enter value for student_id: 00101
Enter value for last: Tyler
Enter value for first: Mickey
Enter value for street: 12 Morris Avenue
Enter value for city: Bronx
Enter value for state: NY
Enter value for zip: 10468
Enter value for startterm: SP03
Enter value for birthday: 18-mar-1984
Enter value for facultyid: 555
Enter value for majorid: 500
Enter value for phone: 7185552222
old   1: insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values ('00101','Tyler','Mickey','12 Morris Avenue','Bronx','NY','10468','SP03','18-mar-1984',555,500,'7185552222')

1 row created.

SQL> /
Enter value for student_id: 00102
Enter value for last: Patel
Enter value for first: Rajesh
Enter value for street: 25 River Road #3
Enter value for city: Edison
Enter value for state: NJ
Enter value for zip: 08837
Enter value for startterm: WN03
Enter value for birthday: 12-dec-1985
Enter value for facultyid: 111
Enter value for majorid: 400
Enter value for phone: 7325553333
old   1: insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values ('00102','Patel','Rajesh','25 River Road #3','Edison','NJ','08837','WN03','12-dec-1985',111,400,'7325553333')

1 row created.

SQL> /
Enter value for student_id: 00103
Enter value for last: Ricles
Enter value for first: Deborah
Enter value for street: 100 Main Street
Enter value for city: Iselin
Enter value for state: NJ
Enter value for zip: 08838
Enter value for startterm: FL02
Enter value for birthday: 20-oct-1970
Enter value for facultyid: 555
Enter value for majorid: 500
Enter value for phone: 7325554444
old   1: insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values ('00103','Ricles','Deborah','100 Main Street','Iselin','NJ','08838','FL02','20-oct-1970',555,500,'7325554444')

1 row created.

SQL> /
Enter value for student_id: 00104
Enter value for last: Lee
Enter value for first: Brian
Enter value for street: 2845 First Lane
Enter value for city: Hope
Enter value for state: NY
Enter value for zip: 1137
Enter value for startterm: WN03
Enter value for birthday: 28-nov-1985
Enter value for facultyid: 345
Enter value for majorid: 600
Enter value for phone: 2125555555
old   1: insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values ('00104','Lee','Brian','2845 First Lane','Hope','NY','1137','WN03','28-nov-1985',345,600,'2125555555')

1 row created.

SQL> /
Enter value for student_id: 00105
Enter value for last: Khan
Enter value for first: Amir
Enter value for street: 213 Broadway
Enter value for city: Clifton
Enter value for state: NJ
Enter value for zip: 07222
Enter value for startterm: WN03
Enter value for birthday: 7-jul-1984
Enter value for facultyid: 222
Enter value for majorid: 200
Enter value for phone: 2015556666
old   1: insert into student values ('&Student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values ('00105','Khan','Amir','213 Broadway','Clifton','NJ','07222','WN03','7-jul-1984',222,200,'2015556666')

1 row created.

SQL> update student set birthday='12-feb-1983' where student_id=00100;

1 row updated.

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 12-FEB-83        123        100 9735551111 
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY                        10468 SP03 18-MAR-84        555        500 7185552222 
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ                        08837 WN03 12-DEC-85        111        400 7325553333 
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00103 Ricles          Deborah         100 Main Street           Iselin          
NJ                        08838 FL02 20-OCT-70        555        500 7325554444 
                                                                                
00104 Lee             Brian           2845 First Lane           Hope            
NY                        1137  WN03 28-NOV-85        345        600 2125555555 
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ                        07222 WN03 07-JUL-84        222        200 2015556666 
                                                                                

6 rows selected.

SQL> select* from (select* from student) WHERE ROWNUM <=900
  2  ;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 12-FEB-83        123        100 9735551111 
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY                        10468 SP03 18-MAR-84        555        500 7185552222 
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ                        08837 WN03 12-DEC-85        111        400 7325553333 
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00103 Ricles          Deborah         100 Main Street           Iselin          
NJ                        08838 FL02 20-OCT-70        555        500 7325554444 
                                                                                
00104 Lee             Brian           2845 First Lane           Hope            
NY                        1137  WN03 28-NOV-85        345        600 2125555555 
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ                        07222 WN03 07-JUL-84        222        200 2015556666 
                                                                                

6 rows selected.

SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount);
Enter value for crid: 1101
Enter value for courseid: CIS265
Enter value for section: 01
Enter value for termid: WN03
Enter value for facultyid: 111
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 13
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1101,'CIS265','01','WN03',111,'MW','09:00','10:30',13,30)

1 row created.

SQL> /
Enter value for crid: 1102
Enter value for courseid: CIS253
Enter value for section: 01
Enter value for termid: WN03
Enter value for facultyid: 123
Enter value for day: TR
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 18
Enter value for maxcount: 40
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1102,'CIS253','01','WN03',123,'TR','09:00','10:30',18,40)

1 row created.

SQL> /
Enter value for crid: 1103
Enter value for courseid: MA150
Enter value for section: 02
Enter value for termid: WN03
Enter value for facultyid: 444
Enter value for day: F
Enter value for start_time: 09:00
Enter value for end_time: 12:00
Enter value for roomid: 15
Enter value for maxcount: 25
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1103,'MA150','02','WN03',444,'F','09:00','12:00',15,25)

1 row created.

SQL> /
Enter value for crid: 1104
Enter value for courseid: AC101
Enter value for section: 10
Enter value for termid: WN03
Enter value for facultyid: 345
Enter value for day: MW
Enter value for start_time: 10:30
Enter value for end_time: 12:00
Enter value for roomid: 16
Enter value for maxcount: 35
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1104,'AC101','10','WN03',345,'MW','10:30','12:00',16,35)

1 row created.

SQL> /
Enter value for crid: 1205
Enter value for courseid: CIS265
Enter value for section: 01
Enter value for termid: SP03
Enter value for facultyid: null
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 14
Enter value for maxcount: 35
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1205,'CIS265','01','SP03',null,'MW','09:00','10:30',14,35)

1 row created.

SQL> /
Enter value for crid: 1206
Enter value for courseid: CIS265
Enter value for section: 02
Enter value for termid: SP03
Enter value for facultyid: 111
Enter value for day: TR
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 18
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1206,'CIS265','02','SP03',111,'TR','09:00','10:30',18,30)

1 row created.

SQL> /
Enter value for crid: 1207
Enter value for courseid: LA123
Enter value for section: 05
Enter value for termid: SP03
Enter value for facultyid: 
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 15
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1207,'LA123','05','SP03',,'MW','09:00','10:30',15,30)
insert into crsection values(1207,'LA123','05','SP03',,'MW','09:00','10:30',15,30)
                                                      *
ERROR at line 1:
ORA-00936: missing expression 


SQL> /
Enter value for crid: 1207
Enter value for courseid: LA123
Enter value for section: 05
Enter value for termid: SP03
Enter value for facultyid: null
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 15
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1207,'LA123','05','SP03',null,'MW','09:00','10:30',15,30)
insert into crsection values(1207,'LA123','05','SP03',null,'MW','09:00','10:30',15,30)
*
ERROR at line 1:
ORA-02291: integrity constraint (CSE1164.C3) violated - parent key not found 


SQL> /
Enter value for crid: 1207
Enter value for courseid: LA123
Enter value for section: 05
Enter value for termid: SP03
Enter value for facultyid: null
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 15
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1207,'LA123','05','SP03',null,'MW','09:00','10:30',15,30)
insert into crsection values(1207,'LA123','05','SP03',null,'MW','09:00','10:30',15,30)
*
ERROR at line 1:
ORA-02291: integrity constraint (CSE1164.C3) violated - parent key not found 


SQL> /
Enter value for crid: 1207
Enter value for courseid: LA123
Enter value for section: 05
Enter value for termid: SP03
Enter value for facultyid: 111
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 15
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1207,'LA123','05','SP03',111,'MW','09:00','10:30',15,30)
insert into crsection values(1207,'LA123','05','SP03',111,'MW','09:00','10:30',15,30)
*
ERROR at line 1:
ORA-02291: integrity constraint (CSE1164.C3) violated - parent key not found 


SQL> select* from course;

COURSE TITLE                   CREDITS PREREQ                                   
------ -------------------- ---------- ------                                   
EN100  Basic English                 0                                          
LA123  English Literature            3 EN100                                    
CIS253 Database Systems              3                                          
CIS265 Systems Analysis              3 CIS253                                   
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

6 rows selected.

SQL> select* from location;

    ROOMID BUILDIN ROO   CAPACITY R                                             
---------- ------- --- ---------- -                                             
        11 Gandhi  101          2 O                                             
        12 Gandhi  103          2 O                                             
        13 Kennedy 202         35 L                                             
        14 Kennedy 204         50 L                                             
        15 Nehru   301         50 C                                             
        16 Nehru   309         45 C                                             
        17 Gandhi  105          2 O                                             
        18 Kennedy 206         40 L                                             
        19 Kennedy 210         30 L                                             
        20 Gandhi  107          2 O                                             
        21 Gandhi  109          2 O                                             

11 rows selected.
SQL> spool off
SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> select* from crsection
  2  ;

no rows selected

SQL> insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount);
Enter value for crid: 1101
Enter value for courseid: CIS265
Enter value for section: 01
Enter value for termid: WN03
Enter value for facultyid: 111
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 13
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1101,'CIS265','01','WN03',111,'MW','09:00','10:30',13,30)

1 row created.

SQL> /
Enter value for crid: 1102
Enter value for courseid: CIS253
Enter value for section: 01
Enter value for termid: WN03
Enter value for facultyid: 123
Enter value for day: TR
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 18
Enter value for maxcount: 40
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1102,'CIS253','01','WN03',123,'TR','09:00','10:30',18,40)

1 row created.

SQL> /
Enter value for crid: 1103
Enter value for courseid: MA150
Enter value for section: 02
Enter value for termid: WN03
Enter value for facultyid: 444
Enter value for day: F
Enter value for start_time: 09:00
Enter value for end_time: 12:00
Enter value for roomid: 15
Enter value for maxcount: 25
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1103,'MA150','02','WN03',444,'F','09:00','12:00',15,25)

1 row created.

SQL> /
Enter value for crid: 1104
Enter value for courseid: AC101
Enter value for section: 10
Enter value for termid: WN03
Enter value for facultyid: 345
Enter value for day: MW
Enter value for start_time: 10:30
Enter value for end_time: 12:00
Enter value for roomid: 16
Enter value for maxcount: 35
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1104,'AC101','10','WN03',345,'MW','10:30','12:00',16,35)

1 row created.

SQL> /
Enter value for crid: 1205
Enter value for courseid: CIS265
Enter value for section: 01
Enter value for termid: SP03
Enter value for facultyid: null
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 14
Enter value for maxcount: 35
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1205,'CIS265','01','SP03',null,'MW','09:00','10:30',14,35)

1 row created.

SQL> /
Enter value for crid: 1206
Enter value for courseid: CIS265
Enter value for section: 02
Enter value for termid: SP03
Enter value for facultyid: 111
Enter value for day: TR
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 18
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1206,'CIS265','02','SP03',111,'TR','09:00','10:30',18,30)

1 row created.

SQL> /
Enter value for crid: 1207
Enter value for courseid: CIS253
Enter value for section: 05
Enter value for termid: SP03
Enter value for facultyid: null
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 15
Enter value for maxcount: 30
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1207,'CIS253','05','SP03',null,'MW','09:00','10:30',15,30)

1 row created.

SQL> select* from course;

COURSE TITLE                   CREDITS PREREQ                                   
------ -------------------- ---------- ------                                   
EN100  Basic English                 0                                          
LA123  English Literature            3 EN100                                    
CIS253 Database Systems              3                                          
CIS265 Systems Analysis              3 CIS253                                   
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

6 rows selected.

SQL> update crsection set courseid='LA123 ' where crid=1207;

1 row updated.

SQL> select* from crsection;

      CRID COURSE SECT TERM  FACULTYID DA START END_T     ROOMID   MAXCOUNT     
---------- ------ ---- ---- ---------- -- ----- ----- ---------- ----------     
      1101 CIS265 01   WN03        111 MW 09:00 10:30         13         30     
      1102 CIS253 01   WN03        123 TR 09:00 10:30         18         40     
      1103 MA150  02   WN03        444 F  09:00 12:00         15         25     
      1104 AC101  10   WN03        345 MW 10:30 12:00         16         35     
      1205 CIS265 01   SP03            MW 09:00 10:30         14         35     
      1206 CIS265 02   SP03        111 TR 09:00 10:30         18         30     
      1207 LA123  05   SP03            MW 09:00 10:30         15         30     

7 rows selected.

SQL> /

      CRID COURSE SECT TERM  FACULTYID DA START END_T     ROOMID   MAXCOUNT     
---------- ------ ---- ---- ---------- -- ----- ----- ---------- ----------     
      1101 CIS265 01   WN03        111 MW 09:00 10:30         13         30     
      1102 CIS253 01   WN03        123 TR 09:00 10:30         18         40     
      1103 MA150  02   WN03        444 F  09:00 12:00         15         25     
      1104 AC101  10   WN03        345 MW 10:30 12:00         16         35     
      1205 CIS265 01   SP03            MW 09:00 10:30         14         35     
      1206 CIS265 02   SP03        111 TR 09:00 10:30         18         30     
      1207 LA123  05   SP03            MW 09:00 10:30         15         30     

7 rows selected.

SQL> insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount);
Enter value for crid: 1208
Enter value for courseid: CIS253
Enter value for section: 21
Enter value for termid: SP03
Enter value for facultyid: 123
Enter value for day: TR
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 14
Enter value for maxcount: 40
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1208,'CIS253','21','SP03',123,'TR','09:00','10:30',14,40)

1 row created.

SQL> /
Enter value for crid: 1209
Enter value for courseid: CIS253
Enter value for section: 11
Enter value for termid: SP03
Enter value for facultyid: 111
Enter value for day: MW
Enter value for start_time: 09:00
Enter value for end_time: 10:30
Enter value for roomid: 18
Enter value for maxcount: 40
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1209,'CIS253','11','SP03',111,'MW','09:00','10:30',18,40)

1 row created.

SQL> /
Enter value for crid: 1210
Enter value for courseid: CIS253
Enter value for section: 31
Enter value for termid: SP03
Enter value for facultyid: 123
Enter value for day: F
Enter value for start_time: TBA
Enter value for end_time: TBA
Enter value for roomid: 19
Enter value for maxcount: 2
old   1: insert into crsection values(&crid,'&courseid','&section','&termid',&facultyid,'&day','&start_time','&end_time',&roomid,&maxcount)
new   1: insert into crsection values(1210,'CIS253','31','SP03',123,'F','TBA','TBA',19,2)

1 row created.

SQL> select* from crsection;

      CRID COURSE SECT TERM  FACULTYID DA START END_T     ROOMID   MAXCOUNT     
---------- ------ ---- ---- ---------- -- ----- ----- ---------- ----------     
      1101 CIS265 01   WN03        111 MW 09:00 10:30         13         30     
      1102 CIS253 01   WN03        123 TR 09:00 10:30         18         40     
      1103 MA150  02   WN03        444 F  09:00 12:00         15         25     
      1104 AC101  10   WN03        345 MW 10:30 12:00         16         35     
      1205 CIS265 01   SP03            MW 09:00 10:30         14         35     
      1206 CIS265 02   SP03        111 TR 09:00 10:30         18         30     
      1207 LA123  05   SP03            MW 09:00 10:30         15         30     
      1208 CIS253 21   SP03        123 TR 09:00 10:30         14         40     
      1209 CIS253 11   SP03        111 MW 09:00 10:30         18         40     
      1210 CIS253 31   SP03        123 F  TBA   TBA           19          2     

10 rows selected.

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                 NOT NULL CHAR(5)
 CSID                                      NOT NULL NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus');
Enter value for studentid: 00100
Enter value for csid: 1103
Enter value for midterm: C
Enter value for final: F
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00100',1103,'C','F','R')

1 row created.

SQL> /
Enter value for studentid: 00100
Enter value for csid: 1102
Enter value for midterm: B
Enter value for final: B
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00100',1102,'B','B','R')

1 row created.

SQL> /
Enter value for studentid: 00100
Enter value for csid: 1104
Enter value for midterm: B
Enter value for final: A
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00100',1104,'B','A','R')

1 row created.


SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                

SQL> spool off
SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 STATE                                              VARCHAR2(25)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startter,'&birthday',&facultyid,&majorid,'&phone');
Enter value for student_id: 00101
Enter value for last: Tyler
Enter value for first: Mickey
Enter value for street: 12 Morris Avenue
Enter value for city: Bronx
Enter value for state: NY
Enter value for zip: 10468
Enter value for startter: SP03
Enter value for birthday: 18-mar-1984
Enter value for facultyid: 555
Enter value for majorid: 500
Enter value for phone: 7185552222
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startter,'&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00101','Tyler','Mickey','12 Morris Avenue','Bronx','NY','10468','SP03,'18-mar-1984',555,500,'7185552222')
ERROR:
ORA-01756: quoted string not properly terminated 


SQL> insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone');
Enter value for student_id: 00101
Enter value for last: Tyler
Enter value for first: Mickey
Enter value for street: 12 Morris Avenue
Enter value for city: Bronx
Enter value for state: NY
Enter value for zip: 10468
Enter value for startterm: SP03
Enter value for birthday: 18-mar-1984
Enter value for facultyid: 555
Enter value for majorid: 500
Enter value for phone: 7185552222
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00101','Tyler','Mickey','12 Morris Avenue','Bronx','NY','10468','SP03','18-mar-1984',555,500,'7185552222')

1 row created.

SQL> /
Enter value for student_id: 00102
Enter value for last: Patel
Enter value for first: Rajesh
Enter value for street: 25 River Road #3
Enter value for city: Edison
Enter value for state: NJ
Enter value for zip: 08837
Enter value for startterm: WN03
Enter value for birthday: 12-dec-1985
Enter value for facultyid: 111
Enter value for majorid: 400
Enter value for phone: 7325553333
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00102','Patel','Rajesh','25 River Road #3','Edison','NJ','08837','WN03','12-dec-1985',111,400,'7325553333')

1 row created.

SQL> /
Enter value for student_id: 00103
Enter value for last: Rickles
Enter value for first: Deborah
Enter value for street: 100 Main Streent Iselin
Enter value for city: NJ
Enter value for state: 08838
Enter value for zip: FL02
Enter value for startterm: 20-oct-1970
Enter value for birthday: 555
Enter value for facultyid: 500
Enter value for majorid: 7325554444
Enter value for phone: lllllllllllllllllllllllllllllllllllllllll
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00103','Rickles','Deborah','100 Main Streent Iselin','NJ','08838','FL02','20-oct-1970','555',500,7325554444,'lllllllllllllllllllllllllllllllllllllllll')
insert into student values('00103','Rickles','Deborah','100 Main Streent Iselin','NJ','08838','FL02','20-oct-1970','555',500,7325554444,'lllllllllllllllllllllllllllllllllllllllll')
                                                                                                     *
ERROR at line 1:
ORA-12899: value too large for column "CSE1164"."STUDENT"."STARTTERM" (actual: 
11, maximum: 4) 

SQL> /
Enter value for student_id: 00103
Enter value for last: Rickles
Enter value for first: Deborah
Enter value for street: 100 Main Street
Enter value for city: Iselin
Enter value for state: NJ
Enter value for zip: 08838
Enter value for startterm: FL02
Enter value for birthday: 20-oct-1970
Enter value for facultyid: 555
Enter value for majorid: 500
Enter value for phone: 7325554444
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00103','Rickles','Deborah','100 Main Street','Iselin','NJ','08838','FL02','20-oct-1970',555,500,'7325554444')

1 row created.

SQL> /
Enter value for student_id: 00104
Enter value for last: lee
Enter value for first: Brian
Enter value for street: 2845 First Lane
Enter value for city: Hope
Enter value for state: NY
Enter value for zip: 1137
Enter value for startterm: WN03
Enter value for birthday: 28-nov-1985
Enter value for facultyid: 345
Enter value for majorid: 600
Enter value for phone: 2125555555
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00104','lee','Brian','2845 First Lane','Hope','NY','1137','WN03','28-nov-1985',345,600,'2125555555')

1 row created.

SQL> /
Enter value for student_id: 00105
Enter value for last: Khan 
Enter value for first: Amir
Enter value for street: 213 Broadway
Enter value for city: Clifton
Enter value for state: NJ
Enter value for zip: 07222
Enter value for startterm: WN03
Enter value for birthday: 07-jul-1984
Enter value for facultyid: 222
Enter value for majorid: 200
Enter value for phone: 2015556666
old   1: insert into student values('&student_id','&last','&first','&street','&city','&state','&zip','&startterm','&birthday',&facultyid,&majorid,'&phone')
new   1: insert into student values('00105','Khan ','Amir','213 Broadway','Clifton','NJ','07222','WN03','07-jul-1984',222,200,'2015556666')

1 row created.

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY                        10468 SP03 18-MAR-84        555        500 7185552222 
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ                        08837 WN03 12-DEC-85        111        400 7325553333 
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00103 Rickles         Deborah         100 Main Street           Iselin          
NJ                        08838 FL02 20-OCT-70        555        500 7325554444 
                                                                                
00104 lee             Brian           2845 First Lane           Hope            
NY                        1137  WN03 28-NOV-85        345        600 2125555555 
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ                        07222 WN03 07-JUL-84        222        200 2015556666 
                                                                                

6 rows selected.

SQL> select* from crsection;

      CRID COURSE SECT TERM  FACULTYID DA START END_T     ROOMID   MAXCOUNT     
---------- ------ ---- ---- ---------- -- ----- ----- ---------- ----------     
      1101 CIS265 01   WN03        111 MW 09:00 10:30         13         30     
      1102 CIS253 01   WN03        123 TR 09:00 10:30         18         40     
      1103 MA150  02   WN03        444 F  09:00 12:00         15         25     
      1104 AC101  10   WN03        345 MW 10:30 12:00         16         35     
      1205 CIS265 01   SP03            MW 09:00 10:30         14         35     
      1206 CIS265 02   SP03        111 TR 09:00 10:30         18         30     
      1207 LA123  05   SP03            MW 09:00 10:30         15         30     
      1208 CIS253 21   SP03        123 TR 09:00 10:30         14         40     
      1209 CIS253 11   SP03        111 MW 09:00 10:30         18         40     
      1210 CIS253 31   SP03        123 F  TBA   TBA           19          2     

10 rows selected.

SQL> select* from registration;

STUDE       CSID M F R                                                          
----- ---------- - - -                                                          
00100       1103 C F R                                                          
00100       1102 B B R                                                          
00100       1104 B A R                                                          

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                 NOT NULL CHAR(5)
 CSID                                      NOT NULL NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus');
Enter value for studentid: 00102
Enter value for csid: 1102
Enter value for midterm: F
Enter value for final: D
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00102',1102,'F','D','R')

1 row created.

SQL> /
Enter value for studentid: 00102
Enter value for csid: 1103
Enter value for midterm: A
Enter value for final: A
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00102',1103,'A','A','R')

1 row created.

SQL> /
Enter value for studentid: 00103
Enter value for csid: 1101
Enter value for midterm: F
Enter value for final: W
Enter value for regstatus: W
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00103',1101,'F','W','W')

1 row created.

SQL> /
Enter value for studentid: 00103
Enter value for csid: 1104
Enter value for midterm: D
Enter value for final: D
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00103',1104,'D','D','R')

1 row created.

SQL> /
Enter value for studentid: 00100
Enter value for csid: 1207
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: X
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00100',1207,'','','X')

1 row created.

SQL> /
Enter value for studentid: 00103
Enter value for csid: 1206
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: W
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00103',1206,'','','W')

1 row created.

SQL> /
Enter value for studentid: 00104
Enter value for csid: 1206
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: X
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00104',1206,'','','X')

1 row created.

SQL> /
Enter value for studentid: 00104
Enter value for csid: 1207
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00104',1207,'','','R')

1 row created.

SQL> /
Enter value for studentid: 00104
Enter value for csid: 1210
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00104',1210,'','','R')

1 row created.

SQL> /
Enter value for studentid: 00105
Enter value for csid: 1208
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00105',1208,'','','R')

1 row created.

SQL> /
Enter value for studentid: 00105
Enter value for csid: 1209
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: X
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00105',1209,'','','X')

1 row created.

SQL> /
Enter value for studentid: 00101
Enter value for csid: 1205
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: X
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00101',1205,'','','X')

1 row created.

SQL> /
Enter value for studentid: 00102
Enter value for csid: 1210
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00102',1210,'','','R')

1 row created.

SQL> /
Enter value for studentid: 00102
Enter value for csid: 1207
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: R
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00102',1207,'','','R')

1 row created.

SQL> /
Enter value for studentid: 00102
Enter value for csid: 1206
Enter value for midterm: 
Enter value for final: 
Enter value for regstatus: X
old   1: insert into registration values('&studentid',&csid,'&midterm','&final','&regstatus')
new   1: insert into registration values('00102',1206,'','','X')

1 row created.

SQL> select* from registration;

STUDE       CSID M F R                                                          
----- ---------- - - -                                                          
00100       1103 C F R                                                          
00100       1102 B B R                                                          
00100       1104 B A R                                                          
00102       1102 F D R                                                          
00102       1103 A A R                                                          
00103       1101 F W W                                                          
00103       1104 D D R                                                          
00100       1207     X                                                          
00103       1206     W                                                          
00104       1206     X                                                          
00104       1207     R                                                          

STUDE       CSID M F R                                                          
----- ---------- - - -                                                          
00104       1210     R                                                          
00105       1208     R                                                          
00105       1209     X                                                          
00101       1205     X                                                          
00102       1210     R                                                          
00102       1207     R                                                          
00102       1206     X                                                          

18 rows selected.

SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
COURSE                         TABLE                                            
CRSECTION                      TABLE                                            
DEPARTMENT                     TABLE                                            
FACULTY                        TABLE                                            
LOCATION                       TABLE                                            
MAJOR                          TABLE                                            
REGISTRATION                   TABLE                                            
ROOM                           TABLE                                            
STUDENT                        TABLE                                            
TERM                           TABLE                                            

10 rows selected.

SQL> desc course;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 COURSEID                                  NOT NULL VARCHAR2(6)
 TITLE                                              VARCHAR2(20)
 CREDITS                                            NUMBER(1)
 PREREQ                                             VARCHAR2(6)

SQL> select* from course;

COURSE TITLE                   CREDITS PREREQ                                   
------ -------------------- ---------- ------                                   
EN100  Basic English                 0                                          
LA123  English Literature            3 EN100                                    
CIS253 Database Systems              3                                          
CIS265 Systems Analysis              3 CIS253                                   
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

6 rows selected.

SQL> desc crsection;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 CRID                                      NOT NULL NUMBER(4)
 COURSEID                                  NOT NULL VARCHAR2(6)
 SECTION                                   NOT NULL CHAR(4)
 TERMID                                    NOT NULL CHAR(4)
 FACULTYID                                          NUMBER(3)
 DAY                                                VARCHAR2(2)
 START_TIME                                         VARCHAR2(5)
 END_TIME                                           VARCHAR2(5)
 ROOMID                                             NUMBER(2)
 MAXCOUNT                                           NUMBER(2)

SQL> select* from crsection;

      CRID COURSE SECT TERM  FACULTYID DA START END_T     ROOMID   MAXCOUNT     
---------- ------ ---- ---- ---------- -- ----- ----- ---------- ----------     
      1101 CIS265 01   WN03        111 MW 09:00 10:30         13         30     
      1102 CIS253 01   WN03        123 TR 09:00 10:30         18         40     
      1103 MA150  02   WN03        444 F  09:00 12:00         15         25     
      1104 AC101  10   WN03        345 MW 10:30 12:00         16         35     
      1205 CIS265 01   SP03            MW 09:00 10:30         14         35     
      1206 CIS265 02   SP03        111 TR 09:00 10:30         18         30     
      1207 LA123  05   SP03            MW 09:00 10:30         15         30     
      1208 CIS253 21   SP03        123 TR 09:00 10:30         14         40     
      1209 CIS253 11   SP03        111 MW 09:00 10:30         18         40     
      1210 CIS253 31   SP03        123 F  TBA   TBA           19          2     

10 rows selected.

SQL> desc department;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 DEPTID                                    NOT NULL NUMBER(1)
 DEPTNAME                                           VARCHAR2(20)
 FACULTYID                                          NUMBER(3)

SQL> select* from department;

    DEPTID DEPTNAME              FACULTYID                                      
---------- -------------------- ----------                                      
         1 Computer Science            111                                      
         2 Telecommunications          222                                      
         3 Accounting                  333                                      
         4 Math and Science            444                                      
         5 Liberal Arts                555                                      

SQL> desc faculty;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 FACULTY_ID                                NOT NULL NUMBER(3)
 NAME                                      NOT NULL VARCHAR2(15)
 ROOMID                                             NUMBER(2)
 PHONE                                              CHAR(3)
 DEPTID                                             NUMBER(1)

SQL> select* from faculty;

FACULTY_ID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       111 Jones                   11 525          1                            
       222 Williams                20 533          2                            
       123 Mobley                  11 529          1                            
       235 Vajpayee                12 577          2                            
       345 sen                     12 579          3                            
       444 Rivera                  21 544          4                            
       555 Chang                   17 587          5                            
       333 Collins                 17 599          3                            

8 rows selected.

SQL> desc location;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMID                                    NOT NULL NUMBER(2)
 BUILDING                                  NOT NULL VARCHAR2(7)
 ROOMNO                                    NOT NULL CHAR(3)
 CAPACITY                                           NUMBER(2)
 ROOMTYPE                                           CHAR(1)

SQL> select* from location;

    ROOMID BUILDIN ROO   CAPACITY R                                             
---------- ------- --- ---------- -                                             
        11 Gandhi  101          2 O                                             
        12 Gandhi  103          2 O                                             
        13 Kennedy 202         35 L                                             
        14 Kennedy 204         50 L                                             
        15 Nehru   301         50 C                                             
        16 Nehru   309         45 C                                             
        17 Gandhi  105          2 O                                             
        18 Kennedy 206         40 L                                             
        19 Kennedy 210         30 L                                             
        20 Gandhi  107          2 O                                             
        21 Gandhi  109          2 O                                             

11 rows selected.

SQL> desc major;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 MAJORID                                   NOT NULL NUMBER(3)
 MAJORDESC                                          VARCHAR2(25)

SQL> select* from major;

   MAJORID MAJORDESC                                                            
---------- -------------------------                                            
       100 AAS-Accounting                                                       
       200 AAS-Computer Science                                                 
       300 AAS-Telecommunications                                               
       400 BS-Accounting                                                        
       500 BS-Computer Science                                                  
       600 BS-Telecommunications                                                

6 rows selected.

SQL> desc registration;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENTID                                 NOT NULL CHAR(5)
 CSID                                      NOT NULL NUMBER
 MIDTERM                                            CHAR(1)
 FINAL                                              CHAR(1)
 REGSTATUS                                          CHAR(1)

SQL> select* from registration;

STUDE       CSID M F R                                                          
----- ---------- - - -                                                          
00100       1103 C F R                                                          
00100       1102 B B R                                                          
00100       1104 B A R                                                          
00102       1102 F D R                                                          
00102       1103 A A R                                                          
00103       1101 F W W                                                          
00103       1104 D D R                                                          
00100       1207     X                                                          
00103       1206     W                                                          
00104       1206     X                                                          
00104       1207     R                                                          

STUDE       CSID M F R                                                          
----- ---------- - - -                                                          
00104       1210     R                                                          
00105       1208     R                                                          
00105       1209     X                                                          
00101       1205     X                                                          
00102       1210     R                                                          
00102       1207     R                                                          
00102       1206     X                                                          

18 rows selected.

SQL> desc room;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 ROOMTYPE                                  NOT NULL CHAR(1)
 ROOMDESC                                           VARCHAR2(9)

SQL> select* from room;

R ROOMDESC                                                                      
- ---------                                                                     
L Lab                                                                           
C Classroom                                                                     
O Office                                                                        

SQL> desc student;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 STUDENT_ID                                NOT NULL CHAR(5)
 LAST                                      NOT NULL VARCHAR2(15)
 FIRST                                     NOT NULL VARCHAR2(15)
 STREET                                             VARCHAR2(25)
 CITY                                               VARCHAR2(15)
 STATE                                              VARCHAR2(25)
 ZIP                                                VARCHAR2(5)
 STARTTERM                                          CHAR(4)
 BIRTHDAY                                           DATE
 FACULTYID                                          NUMBER(3)
 MAJORID                                            NUMBER(3)
 PHONE                                              CHAR(10)

SQL> select* from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ                        08863 WN03 02-DEC-83        123        100 9735551111 
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY                        10468 SP03 18-MAR-84        555        500 7185552222 
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ                        08837 WN03 12-DEC-85        111        400 7325553333 
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
STATE                     ZIP   STAR BIRTHDAY   FACULTYID    MAJORID PHONE      
------------------------- ----- ---- --------- ---------- ---------- ---------- 
00103 Rickles         Deborah         100 Main Street           Iselin          
NJ                        08838 FL02 20-OCT-70        555        500 7325554444 
                                                                                
00104 lee             Brian           2845 First Lane           Hope            
NY                        1137  WN03 28-NOV-85        345        600 2125555555 
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ                        07222 WN03 07-JUL-84        222        200 2015556666 
                                                                                

6 rows selected.

SQL> desc term;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 TERMID                                    NOT NULL CHAR(4)
 TERMDESC                                           VARCHAR2(11)
 STARTDATE                                          DATE
 ENDDATE                                            DATE

SQL> select* from term;

TERM TERMDESC    STARTDATE ENDDATE                                              
---- ----------- --------- ---------                                            
SP02 Spring 2002 28-APR-02 16-AUG-02                                            
FL02 Fall 2002   08-SEP-02 20-DEC-02                                            
WN03 Winter 2003 05-JAN-03 18-APR-03                                            
SP03 Spring 2003 27-APR-03 15-AUG-03                                            
FL03 Fall 2003   07-SEP-03 19-DEC-03                                            

SQL> spool off