SQL> create table employee(employeeID number(3),Lname varchar(15),Fname varchar(15), HireDate date, Salary number(10,2));

Table created.

SQL> desc employee;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 EMPLOYEEID                                         NUMBER(3)
 LNAME                                              VARCHAR2(15)
 FNAME                                              VARCHAR2(15)
 HIREDATE                                           DATE
 SALARY                                             NUMBER(10,2)

SQL> insert into employee values(&employeeid,&lname,&fname,&hiredate,&salary);
Enter value for employeeid: 001
Enter value for lname: 'maura'
Enter value for fname: 'ishita'
Enter value for hiredate: '20-dec-2023'
Enter value for salary: 100000.7
old   1: insert into employee values(&employeeid,&lname,&fname,&hiredate,&salary)
new   1: insert into employee values(001,'maura','ishita','20-dec-2023',100000.7)

1 row created.

SQL> select*from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
         1 maura           ishita          20-DEC-23   100000.7                 

SQL> insert into employee values(002,'sharan','hritika','25-oct-2023',150000.5);

1 row created.

SQL> select*from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
         1 maura           ishita          20-DEC-23   100000.7                 
         2 sharan          hritika         25-OCT-23   150000.5                 

SQL> insert into employee values(003,'prakash','prayash','19-sep-2023',177000.75);

1 row created.

SQL> insert into employee values(004,'sharma','lalit','19-jan-2023',250000.0);

1 row created.

SQL> insert into employee values(005,'meena','prakash','05-apr-2023',250000.0);

1 row created.

SQL> select*from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
         1 maura           ishita          20-DEC-23   100000.7                 
         2 sharan          hritika         25-OCT-23   150000.5                 
         3 prakash         prayash         19-SEP-23  177000.75                 
         4 sharma          lalit           19-JAN-23     250000                 
         5 meena           prakash         05-APR-23     250000                 

SQL> commit
  2  ;

Commit complete.

SQL> alter table employee add(city varchar(20));

Table altered.

SQL> insert into employee(city) values('jaipur');

1 row created.

SQL> select*from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
--------------------                                                            
         1 maura           ishita          20-DEC-23   100000.7                 
                                                                                
                                                                                
         2 sharan          hritika         25-OCT-23   150000.5                 
                                                                                
                                                                                
         3 prakash         prayash         19-SEP-23  177000.75                 
                                                                                
                                                                                

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
--------------------                                                            
         4 sharma          lalit           19-JAN-23     250000                 
                                                                                
                                                                                
         5 meena           prakash         05-APR-23     250000                 
                                                                                
                                                                                
                                                                                
jaipur                                                                          
                                                                                

6 rows selected.

SQL> exit
SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
EMPLOYEE                       TABLE                                            
STUDENT                        TABLE                                            

SQL> Select* from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
--------------------                                                            
         1 maura           ishita          20-DEC-23   100000.7                 
                                                                                
                                                                                
         2 sharan          hritika         25-OCT-23   150000.5                 
                                                                                
                                                                                
         3 prakash         prayash         19-SEP-23  177000.75                 
                                                                                
                                                                                

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
--------------------                                                            
         4 sharma          lalit           19-JAN-23     250000                 
                                                                                
                                                                                
         5 meena           prakash         05-APR-23     250000                 
                                                                                
                                                                                
                                                                                
jaipur                                                                          
                                                                                

6 rows selected.

SQL> alter table employee drop column city;

Table altered.

SQL> desc employee;
 Name                                      Null?    Type
 ----------------------------------------- -------- ----------------------------
 EMPLOYEEID                                         NUMBER(3)
 LNAME                                              VARCHAR2(15)
 FNAME                                              VARCHAR2(15)
 HIREDATE                                           DATE
 SALARY                                             NUMBER(10,2)

SQL> alter table employee add(city varchar(30));

Table altered.

SQL> update employee set city='jaipur' where employeeid=001;

1 row updated.

SQL> update employee set city='banaras' where employeeid=002;

1 row updated.

SQL> update employee set city='bbs' where employeeid=003;

1 row updated.

SQL> update employee set city='ctc' where employeeid=004;

1 row updated.

SQL> update employee set city='agra' where employeeid=005;

1 row updated.

SQL> Select* from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         1 maura           ishita          20-DEC-23   100000.7                 
jaipur                                                                          
                                                                                
         2 sharan          hritika         25-OCT-23   150000.5                 
banaras                                                                         
                                                                                
         3 prakash         prayash         19-SEP-23  177000.75                 
bbs                                                                             
                                                                                

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         4 sharma          lalit           19-JAN-23     250000                 
ctc                                                                             
                                                                                
         5 meena           prakash         05-APR-23     250000                 
agra                                                                            
                                                                                
                                                                                
                                                                                
                                                                                

6 rows selected.

SQL> update employee set citybhuba
  2  ;

*
ERROR at line 2:
ORA-00927: missing equal sign 


SQL> update employee set city=bhubaneswar where city=bbs;
update employee set city=bhubaneswar where city=bbs
                                                *
ERROR at line 1:
ORA-00904: "BBS": invalid identifier 


SQL> update employee set city='bhubaneswar' where city=bbs;
update employee set city='bhubaneswar' where city=bbs
                                                  *
ERROR at line 1:
ORA-00904: "BBS": invalid identifier 


SQL> update employee set city='bhubaneswar' where city='bbs';

1 row updated.

SQL> Select* from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         1 maura           ishita          20-DEC-23   100000.7                 
jaipur                                                                          
                                                                                
         2 sharan          hritika         25-OCT-23   150000.5                 
banaras                                                                         
                                                                                
         3 prakash         prayash         19-SEP-23  177000.75                 
bhubaneswar                                                                     
                                                                                

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         4 sharma          lalit           19-JAN-23     250000                 
ctc                                                                             
                                                                                
         5 meena           prakash         05-APR-23     250000                 
agra                                                                            
                                                                                
                                                                                
                                                                                
                                                                                

6 rows selected.

SQL> delete from employee where city='ctc';

1 row deleted.

SQL> select* from employee;

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         1 maura           ishita          20-DEC-23   100000.7                 
jaipur                                                                          
                                                                                
         2 sharan          hritika         25-OCT-23   150000.5                 
banaras                                                                         
                                                                                
         3 prakash         prayash         19-SEP-23  177000.75                 
bhubaneswar                                                                     
                                                                                

EMPLOYEEID LNAME           FNAME           HIREDATE      SALARY                 
---------- --------------- --------------- --------- ----------                 
CITY                                                                            
------------------------------                                                  
         5 meena           prakash         05-APR-23     250000                 
agra                                                                            
                                                                                
                                                                                
                                                                                
                                                                                

SQL> drop table employee;

Table dropped.

SQL> select* from tab;

TNAME                          TABTYPE  CLUSTERID                               
------------------------------ ------- ----------                               
STUDENT                        TABLE                                            

SQL> spool off;