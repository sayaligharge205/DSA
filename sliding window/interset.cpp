int n, m;
    cin >> n >> m;
    
    vector<int> nums1(n), nums2(m);
    

    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    
 
    vector<int> result = intersect(nums1, nums2);
    

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;