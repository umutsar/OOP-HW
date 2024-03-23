#include <iostream>

using namespace std;

class TestScores
{
private:
    double testScore1;
    double testScore2;
    double testScore3;

public:
    TestScores()
    {
        testScore1 = 0;
        testScore2 = 0;
        testScore3 = 0;
    }

    // mttr
    void setTestScore1(double _score)
    {
        testScore1 = _score;
    }

    void setTestScore2(double _score)
    {
        testScore2 = _score;
    }

    void setTestScore3(double _score)
    {
        testScore3 = _score;
    }
    // calculate function
    double calculateAverage()
    {
        return (testScore1 + testScore2 + testScore3) / 3;
    }
};

int main()
{
    TestScores testScores;

    double score1, score2, score3;
    cout << "Enter first test score: ";
    cin >> score1;
    cout << "Enter second test score: ";
    cin >> score2;
    cout << "Enter third test score: ";

    cin >> score3;

    testScores.setTestScore1(score1);
    testScores.setTestScore2(score2);
    testScores.setTestScore3(score3);

    cout << "Average of test scores: " << testScores.calculateAverage() << endl;

    return 0;
}
