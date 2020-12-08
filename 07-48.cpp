string null_isbn("9-999-99999-9"); 
Sales_data item1(null_isbn);        //leads to class object creation
Sales_data item2("9-999-99999-9");  //leads to class object creation

//if the constructor become explicit, then the above two lines would be error.
