SQL> select * from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
COURSE                         TABLE                                            
CRSSECTION                     TABLE                                            
DEPARTMENT                     TABLE                                            
FACULTY                        TABLE                                            
LOCATION                       TABLE                                            
MAJOR                          TABLE                                            
REGISTRATION                   TABLE                                            
ROOM                           TABLE                                            
STUDENT                        TABLE                                            
TERM                           TABLE                                            

10 rows selected.

SQL> select building from LOCATION;

BUILDIN                                                                         
-------                                                                         
Gandhi                                                                          
Gandhi                                                                          
Kennedy                                                                         
Kennedy                                                                         
Nehru                                                                           
Nehru                                                                           
Gandhi                                                                          
Kennedy                                                                         
Kennedy                                                                         
Gandhi                                                                          
Gandhi                                                                          

11 rows selected.

SQL> select distinct building from LOCATION;

BUILDIN                                                                         
-------                                                                         
Gandhi                                                                          
Kennedy                                                                         
Nehru                                                                           

SQL> select * from course;

COURSE TITLE                   CREDITS PREREQ                                   
------ -------------------- ---------- ------                                   
EN100  Basic English                 0                                          
LA123  English Literature            3 EN100                                    
CIS253  Database Systems             3                                          
CIS265 Systems Analysis              3 CIS253                                   
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

6 rows selected.

SQL> select * from crssection;

      CSID COURSE SE TERM  FACULTYID DA START ENDTI     ROOMID   MAXCOUNT       
---------- ------ -- ---- ---------- -- ----- ----- ---------- ----------       
      1101 CIS265 01 WN03        111 MW 09:00 10:30         13         30       
      1102 CIS253 01 WN03        123 TR 09:00 10:30         18         40       
      1103 MA150  02 WN03        444 F  09:00 12:00         15         25       
      1104 AC101  10 WN03        345 MW 10:30 12:00         16         35       
      1205 CIS265 01 SP03            MW 09:00 10:30         14         35       
      1206 CIS265 02 SP03        111 TR 09:00 10:30         18         30       
      1207 LA123  05 SP03            MW 09:00 10:30         15         30       
      1208 CIS253 21 SP03        123 TR 09:00 10:30         14         40       
      1209 CIS253 11 SP03        111 MW 09:00 10:30         18         40       
      1210 CIS253 31 SP03        123 F  TBA   TBA           19          2       

10 rows selected.

SQL> select * from crssection where TERM is WN03;
select * from crssection where TERM is WN03
                                       *
ERROR at line 1:
ORA-00908: missing NULL keyword 


SQL> select * from crssection where TERM WN03;
select * from crssection where TERM WN03
                                    *
ERROR at line 1:
ORA-00920: invalid relational operator 


SQL> select * from crssection where TERMID WN03;
select * from crssection where TERMID WN03
                                      *
ERROR at line 1:
ORA-00920: invalid relational operator 


SQL> select * from crssection where TermId WN03;
select * from crssection where TermId WN03
                                      *
ERROR at line 1:
ORA-00920: invalid relational operator 


SQL> select * from crssection where TERMId WN03;
select * from crssection where TERMId WN03
                                      *
ERROR at line 1:
ORA-00920: invalid relational operator 


SQL> select * from crssection where TermID='WN03';

      CSID COURSE SE TERM  FACULTYID DA START ENDTI     ROOMID   MAXCOUNT       
---------- ------ -- ---- ---------- -- ----- ----- ---------- ----------       
      1101 CIS265 01 WN03        111 MW 09:00 10:30         13         30       
      1102 CIS253 01 WN03        123 TR 09:00 10:30         18         40       
      1103 MA150  02 WN03        444 F  09:00 12:00         15         25       
      1104 AC101  10 WN03        345 MW 10:30 12:00         16         35       

SQL> select * from faculty;

 FACULTYID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       111 Jones                   11 525          1                            
       222 Williams                20 533          2                            
       123 Mobley                  11 529          1                            
       235 Vajpayee                12 577          2                            
       345 Sen                     12 579          3                            
       444 Rivera                  21 544          4                            
       555 Chang                   17 587          5                            
       333 Collins                 17 599          3                            

8 rows selected.

SQL> select * from faculty where DeptId=(1,2);
select * from faculty where DeptId=(1,2)
                                  *
ERROR at line 1:
ORA-01797: this operator must be followed by ANY or ALL 


SQL> select * from faculty where DeptId in (1,2) ;

 FACULTYID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       111 Jones                   11 525          1                            
       222 Williams                20 533          2                            
       123 Mobley                  11 529          1                            
       235 Vajpayee                12 577          2                            

SQL> select * from student;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
ST ZIP   STAR BIRTHDAY_ FACULTYID_NEW MAJORID_NEW PHONE_NEW                     
-- ----- ---- --------- ------------- ----------- ----------                    
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ 08863 WN03 12-FEB-83           123         100 9735551111                    
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY 10468 SP03 18-MAR-84           555         500 7185552222                    
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ 08837 WN03 12-DEC-85           111         400 7325553333                    
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
ST ZIP   STAR BIRTHDAY_ FACULTYID_NEW MAJORID_NEW PHONE_NEW                     
-- ----- ---- --------- ------------- ----------- ----------                    
00103 Ricles          Deborah         100 Main Street           Iselin          
NJ 08838 FL02 20-OCT-70           555         500 7325554444                    
                                                                                
00104 Lee             Brian           2845 First Lane           Hope            
NY 1137  WN03 28-NOV-85           345         600 2125555555                    
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ 07222 WN03 07-JUL-84           222         200 2015556666                    
                                                                                

6 rows selected.

SQL> select studentid,last ,first,state from student where student in ('NJ','NY');
select studentid,last ,first,state from student where student in ('NJ','NY')
                                                      *
ERROR at line 1:
ORA-00904: "STUDENT": invalid identifier 


SQL> select StudentID,last ,first,state from Student where student in ('NJ','NY');
select StudentID,last ,first,state from Student where student in ('NJ','NY')
                                                      *
ERROR at line 1:
ORA-00904: "STUDENT": invalid identifier 


SQL> select StudentID,last ,first,state from Student where state in ('NJ','NY');

STUDE LAST            FIRST           ST                                        
----- --------------- --------------- --                                        
00100 Diaz            Jose            NJ                                        
00101 Tyler           Mickey          NY                                        
00102 Patel           Rajesh          NJ                                        
00103 Ricles          Deborah         NJ                                        
00104 Lee             Brian           NY                                        
00105 Khan            Amir            NJ                                        

6 rows selected.

SQL> select CourseID,Section,MaxCount from crssection order by maxcount DESC;

COURSE SE   MAXCOUNT                                                            
------ -- ----------                                                            
CIS253 11         40                                                            
CIS253 01         40                                                            
CIS253 21         40                                                            
AC101  10         35                                                            
CIS265 01         35                                                            
CIS265 02         30                                                            
LA123  05         30                                                            
CIS265 01         30                                                            
MA150  02         25                                                            
CIS253 31          2                                                            

10 rows selected.

SQL> select * from course where PreReq='null';

no rows selected

SQL> select courseid,title,credits from course where PreReq is null;

COURSE TITLE                   CREDITS                                          
------ -------------------- ----------                                          
EN100  Basic English                 0                                          
CIS253  Database Systems             3                                          
MA150  College Algebra               3                                          
AC101  Accounting                    3                                          

SQL> select * from faculty;

 FACULTYID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       111 Jones                   11 525          1                            
       222 Williams                20 533          2                            
       123 Mobley                  11 529          1                            
       235 Vajpayee                12 577          2                            
       345 Sen                     12 579          3                            
       444 Rivera                  21 544          4                            
       555 Chang                   17 587          5                            
       333 Collins                 17 599          3                            

8 rows selected.

SQL> select * from faculty order by DeptId DESC,Name ASC;

 FACULTYID NAME                ROOMID PHO     DEPTID                            
---------- --------------- ---------- --- ----------                            
       555 Chang                   17 587          5                            
       444 Rivera                  21 544          4                            
       333 Collins                 17 599          3                            
       345 Sen                     12 579          3                            
       235 Vajpayee                12 577          2                            
       222 Williams                20 533          2                            
       111 Jones                   11 525          1                            
       123 Mobley                  11 529          1                            

8 rows selected.

SQL> select studentid,last,first, startterm from student where start term in ('WN03','SP03');
select studentid,last,first, startterm from student where start term in ('WN03','SP03')
                                                          *
ERROR at line 1:
ORA-00936: missing expression 


SQL> select studentid,last,first, startterm from student where startterm in ('WN03','SP03');
select studentid,last,first, startterm from student where startterm in ('WN03','SP03')
                                                          *
ERROR at line 1:
ORA-00904: "STARTTERM": invalid identifier 


SQL> SELECT * FROM STUDENT;

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
ST ZIP   STAR BIRTHDAY_ FACULTYID_NEW MAJORID_NEW PHONE_NEW                     
-- ----- ---- --------- ------------- ----------- ----------                    
00100 Diaz            Jose            1 Ford Avenue#7           Hill            
NJ 08863 WN03 12-FEB-83           123         100 9735551111                    
                                                                                
00101 Tyler           Mickey          12 Morris Avenue          Bronx           
NY 10468 SP03 18-MAR-84           555         500 7185552222                    
                                                                                
00102 Patel           Rajesh          25 River Road #3          Edison          
NJ 08837 WN03 12-DEC-85           111         400 7325553333                    
                                                                                

STUDE LAST            FIRST           STREET                    CITY            
----- --------------- --------------- ------------------------- --------------- 
ST ZIP   STAR BIRTHDAY_ FACULTYID_NEW MAJORID_NEW PHONE_NEW                     
-- ----- ---- --------- ------------- ----------- ----------                    
00103 Ricles          Deborah         100 Main Street           Iselin          
NJ 08838 FL02 20-OCT-70           555         500 7325554444                    
                                                                                
00104 Lee             Brian           2845 First Lane           Hope            
NY 1137  WN03 28-NOV-85           345         600 2125555555                    
                                                                                
00105 Khan            Amir            213 Broadway              Clifton         
NJ 07222 WN03 07-JUL-84           222         200 2015556666                    
                                                                                

6 rows selected.

SQL> select studentid,last,first, startterm_new from student where startterm_new in ('WN03','SP03');

STUDE LAST            FIRST           STAR                                      
----- --------------- --------------- ----                                      
00100 Diaz            Jose            WN03                                      
00101 Tyler           Mickey          SP03                                      
00102 Patel           Rajesh          WN03                                      
00104 Lee             Brian           WN03                                      
00105 Khan            Amir            WN03                                      

SQL> select count(RoomId) from location;

COUNT(ROOMID)                                                                   
-------------                                                                   
           11                                                                   

SQL> select Avg(floor(months_between(sysdate,BIRTHDAY_NEW)/12)) as Average_Age,max(floor(months_between(sysdate,BIRTHDAY_NEW)/12)) as Highest_Age,min(floor(months_between(sysdate,BIRTHDAY_NEW)/12)) as Minimum_Age from student;

AVERAGE_AGE HIGHEST_AGE MINIMUM_AGE                                             
----------- ----------- -----------                                             
 41.1666667          53          38                                             

SQL> select courseid,title,
  2        CASE
  3          WHEN prereq IS NULL THEN 'none'
  4      		else 'one'
  5        END AS prerequisites_status
  6      FROM
  7      course;

COURSE TITLE                PRER                                                
------ -------------------- ----                                                
EN100  Basic English        none                                                
LA123  English Literature   one                                                 
CIS253  Database Systems    none                                                
CIS265 Systems Analysis     one                                                 
MA150  College Algebra      none                                                
AC101  Accounting           none                                                

6 rows selected.

SQL> select first , last , birthday_NEW from student where to_char(birthday_NEW,'MON')='JUL';

FIRST           LAST            BIRTHDAY_                                       
--------------- --------------- ---------                                       
Amir            Khan            07-JUL-84                                       

SQL> SPOOL OFF;