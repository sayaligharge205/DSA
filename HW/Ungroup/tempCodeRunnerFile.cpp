int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    int result = searchRotatedArray(n, nums, target);
    cout << result << "\n";
    return 0;
}