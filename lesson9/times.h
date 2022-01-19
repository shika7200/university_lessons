//
// Created by uguru on 22.12.2021.
//


class cycles {
public:
    double variable, DeadEnd, step;
    int N;
    cycles(double x, double b, double c);
    ~cycles();
    double firstSolution();
    double secondSolution();
    double thirdSolution();

};