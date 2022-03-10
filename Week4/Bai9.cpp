void sort(float array[], int size, bool isAscending)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    if (!isAscending)
    {
        for (int i = 0; i < size / 2; i++)
        {
            float temp = array[i];
            array[i] = array[size - i - 1];
            array[size - i - 1] = temp;
        }
    }
}