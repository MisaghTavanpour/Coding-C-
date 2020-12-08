int main () {
    /* 
        Test nested comments
        /*
            inner comment
         */
     */
   
    return 0;
} 

// Run Result:
    
// > g++ 01-07.c -o 01-07.exe 
// 01-07.c:4:9: warning: '/*' within block comment [-Wcomment]
//         /*
//         ^
// 01-07.c:7:7: error: expected expression
//      */
//       ^
// 01-07.c:9:5: error: expected expression
//     return 0;
//     ^
// 1 warning and 2 errors generated.

