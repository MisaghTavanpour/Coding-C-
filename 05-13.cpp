(a)
unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
char ch = next_text();
switch (ch) {
    case 'a': aCnt++;                     // break? 
    case 'e': eCnt++;                     // break?
    default: iouCnt++;
}


(b)
unsigned index = some_value();
switch (index) {
    case 1:
        int ix = get_value();           // error: controller bypasses an explicity initialized variable.
        ivec[ ix ] = index;
        break;
    default:
        ix = ivec.size()-1;
        ivec[ ix ] = index;
}


(c)
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
    case 1, 3, 5, 7, 9:                 // onlye one conas integral statement is permitted fpr a label
        oddcnt++;
        break;
    case 2, 4, 6, 8, 10:                // same error
        evencnt++;
        break;
}


(d)
unsigned ival=512, jval=1024, kval=4096; //make it const to aovid below errors
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
    case ival:                          //case value is not a constant expression
        bufsize = ival * sizeof(int);
        break;
    case jval:                          //case value is not a constant expression
        bufsize = jval * sizeof(int);
        break;
    case kval:                          //case value is not a constant expression
        bufsize = kval * sizeof(int);
        break;
}
