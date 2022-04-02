int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *mergeArr = new int [lenArr1+lenArr2];
    int index = 0;
    bool check = 0;
    for (int i = 0; i < lenArr1; ++i) mergeArr[index++] = firstArr[i]; 
    for (int i = 0; i < lenArr2; ++i) mergeArr[index++] = secondArr[i];
    if (firstArr[0] < firstArr[1]) check = 1;
    if (check == 1)
        sort(mergeArr, mergeArr + index);
    else sort(mergeArr, mergeArr + index, [](int a, int b) {
        return a > b;
    });
    return mergeArr;
}