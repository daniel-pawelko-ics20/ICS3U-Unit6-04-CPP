// Copyright (c) 2022 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Jan 2022
// 2D array

#include <iostream>
#include <string>
#include <random>

using std::cout;
using std::endl;
using std::cin;

float average(int **arr, int rows, int colm) {
    // defining total variable
    float total = 0;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < colm; col++) {
            cout << arr[row][col] << " ";
            total += arr[row][col];
        }
        cout << endl;
    }

    return total/(rows*colm);
    cout << "\nAverage is " << total/(rows*colm) << endl;
}

int main() {
    // main function for array

    // stuff for random
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> distr(1, 50);

    // variables
    std::string temp;
    int rows;
    int colm;

    // input
    cout << "How many rows: ";
    cin >> temp;
    rows = std::stoi(temp);

    cout << "How many columns: ";
    cin >> temp;
    colm = std::stoi(temp);

    // defining array
    int **arr = new int*[rows];
    for (int col = 0; col < rows; col++) {
        arr[col] = new int[colm];
    }

    // creating random numbers
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < colm; col++) {
            arr[row][col] = distr(eng);
        }
    }

    // calling function/process/output
    float av = average(arr, rows, colm);
    cout << "\nAverage is " << av << endl;

    // output finished
    cout << endl;
    cout << "Done." << endl;
}
