/*
(a)
for (int ix = 0; ix != sz; ++ix) { ... }
if (ix != sz)                               // error ix is local to for loop
// . . .

(b)
int ix;
for (ix != sz; ++ix) { ... }                //need ';' befor the condition

(c)
for (int ix = 0; ix != sz; ++ix, ++sz) { ... }  //either it does not execute the for block, or it will be an infinite loop
*/
