myScreen.move(4,0).set('#').display(cout);
The output will be same since move return an reference to the object and set will modify a char and pass a copy of the object into display.

However, if we have had something like
myScreen.move(4,0).set('#').set('?').display(cout);

then the out put would be different:

with "Screen &" as the return type
XXXXXXXXXXXXXXXXXXXX?XXXX
XXXXXXXXXXXXXXXXXXXX?XXXX

with "Screen" as the return type
XXXXXXXXXXXXXXXXXXXX?XXXX
XXXXXXXXXXXXXXXXXXXX#XXXX
