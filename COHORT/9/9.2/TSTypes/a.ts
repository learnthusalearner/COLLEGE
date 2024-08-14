// type greet =string | number | boolean
//greet can be string or number which interface not does
type Employee = {//type
    name: string;
    startDate: Date | string;
  };
  
interface Manager {//interface
    name: string;
    department: string;
  };

  type Techlead = Employee & Manager;
  const t: Techlead ={
    name:"kunal",
    // startDate:new Date(),
    startDate:new Date().toString(),//it might have caused an error if startdate is an interface
    department:"xyz"

}    
console.log(t)

//POPULAR INTERVIEW Q Diff b/w interface and types
// if you need to do an  intersection of two interface then we use types as in line 13 
// and as we know interface can have only be one string,bool,num but types can be multiple
// we can define array only with type not with interface