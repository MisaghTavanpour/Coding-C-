/*
finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

right associative --> finalgrade = (grade > 90) ? "high pass" : ((grade < 60) ? "fail" : "pass"); --> which is good
                                                                --------------------------------
                                                                        group this first

left associative  --> finalgrade = ((grade > 90) ? "high pass" : (grade < 60)) ? "fail" : "pass"; --> which is wrong
                                   -------------------------------------------
                                                    group this first

*/
