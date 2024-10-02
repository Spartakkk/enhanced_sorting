template <typename T> int binarySearch(T a[], int item, int low, int high)
{
	if (high <= low)
		return (item > a[low]) ? (low + 1) : low;
	int mid = (low + high) / 2;
	if (item == a[mid])
		return mid + 1;
	if (item > a[mid])
		return binarySearch(a, item, mid + 1, high);
	return binarySearch(a, item, low, mid - 1);
}


template <typename T> void binary_insertion_sort(T* arr, const int n)
{
	int i, loc, j, selected;
	for (i = 1; i < n; ++i)
	{
		j = i - 1;
		selected = arr[i];
		loc = binarySearch(arr, selected, 0, j);
		while (j >= loc)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = selected;
	}
}