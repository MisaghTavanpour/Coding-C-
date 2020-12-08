int *q = new int(42), *r = new int(100);
r = q;                              // r previous memory should be deleted first
auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);
r2 = q2;                            // fine, r2 previous memory automatically get deleted

