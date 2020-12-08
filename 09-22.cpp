vector<int>::iterator iv;
vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size()/2;

while (iter != mid)
    if (*iter == some_val)
        // iv.insert(iter, 2 * some_val); --> what if vector get relocated? iter needs to get updated after each insert.
        iter = iv.insert(iter, 2 * some_val);
