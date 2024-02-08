// @todo: Add a file documentation header as explained in the specs ...

#include "q.h"
#include <math.h>
#include <stdio.h>

int max_index(double const arr[], int size) {
    double max_val = arr[0];
    for (int i = 1; i < size; ++i) {
        max_val = arr[i] > max_val ? arr[i] : max_val;
    }
    return max_val;
}

int min_index(double const arr[], int size) {
    double min_val = arr[0];
    for (int i = 1; i < size; ++i) {
        min_val = arr[i] < min_val ? arr[i] : min_val;
    }
    return min_val;
}

double mean(double const arr[], int n) {
    double mean = 0;
    double sum = arr[0];
    for (int i = 1; i < n; ++i) {
        sum += arr[i];
    }
    mean = sum/n;
    return mean;
}

double variance(double arr[], int size) {
    double V = arr[0];
    for (int i = 1; i < size; ++i) {
        V = ((mean - arr[i]) * (mean - arr[i]))/(size - 1);
    }
    return V;
}

double std_dev(double arr[], int size) {
    double SD = 0;
    SD = sqrt(V);
    return SD;
}

int read_data(double arr[], int max_count) {
    int i = 0;
    double num;
    while ( (scanf("%lf", &num) != EOF) && i < max_count ) {
        arr[i++] = num;
        }
    return i;
}
