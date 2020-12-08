char *init(int ht, int wd = 80, char bckgrnd = ' ');
(a) init();         //error, missing argument for ht
(b) init(24,10);    //OK
(c) init(14, '*');  //Ok, but convert char '*' to an int
