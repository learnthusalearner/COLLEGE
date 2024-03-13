SQL> spool
currently spooling to C:\Users\KIIT\Documents\sem4\DBMS\lab\lab4_1.sql

SQL> select c1.title,c2.title
  2  from course c1
  3  left join course c2 on c1.prereq=c2.courseid;

TITLE                TITLE                                                      
-------------------- --------------------                                       
English Literature   Basic English                                              
Systems Analysis     Database Systems                                           
Accounting                                                                      
College Algebra                                                                 
Database Systems                                                                
Basic English                                                                   

6 rows selected.

                                      
SQL> select c1.title,c2.title
  2  from course c1
  3  join course c2 on c1.prereq=c2.courseid(+);

TITLE                TITLE                                                      
-------------------- --------------------                                       
English Literature   Basic English                                              
Systems Analysis     Database Systems                                           
Accounting                                                                      
College Algebra                                                                 
Database Systems                                                                
Basic English                                                                   

6 rows selected.

SQL> select c.courseid,cs.section,f.name
  2  from crssection cs
  3  join course c on cs.courseid=c.courseid
  4  join faculty f on cs.facultyid=f.facultyid
  5  where cs.termid='SP03';

COURSE SE NAME                                                                  
------ -- ---------------                                                       
CIS253 11 Jones                                                                 
CIS265 02 Jones                                                                 
CIS253 31 Mobley                                                                
CIS253 21 Mobley                                                                

SQL> select c.courseid,cs.section,f.name
  2  from crssection cs
  3  join course c on cs.courseid=c.courseid
  4  left join faculty f on cs.facultyid=f.facultyid
  5  where cs.termid='SP03';

COURSE SE NAME                                                                  
------ -- ---------------                                                       
CIS253 11 Jones                                                                 
CIS265 02 Jones                                                                 
CIS253 31 Mobley                                                                
CIS253 21 Mobley                                                                
LA123  05                                                                       
CIS265 01                                                                       

6 rows selected.

SQL> SELECT s.First AS "Student First Name", f.Name AS "Faculty Name"
  2  FROM STUDENT s
  3  JOIN FACULTY f ON s.FacultyID = f.FacultyID;

Student First N Faculty Name                                                    
--------------- ---------------                                                 
Rajesh          Jones                                                           
Amir            Williams                                                        
Jose            Mobley                                                          
Brian           Sen                                                             
Deborah         Chang                                                           
Mickey          Chang                                                           

6 rows selected.
                                                                    
8 rows selected.
SQL> SELECT DISTINCT s.First AS "Student FirstName"
  2  FROM STUDENT s
  3  WHERE s.First NOT IN (SELECT f.Name FROM FACULTY f WHERE f.Name IS NOT NULL);

Student FirstNa                                                                 
---------------                                                                 
Amir                                                                            
Deborah                                                                         
Mickey                                                                          
Rajesh                                                                          
Brian                                                                           
Jose                                                                            

6 rows selected.

SQL> spool off