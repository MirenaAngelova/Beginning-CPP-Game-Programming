// Demonstrates algorithms

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores.";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nRandomizing scores.";
	srand(time(0));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}


	cout << "\nCreating another list of scores.";
	vector<int> moreScores;
	moreScores.push_back(2000);
	moreScores.push_back(4000);
	moreScores.push_back(8000);

	cout << "\More High Scores:\n";
	for (iter = moreScores.begin(); iter != moreScores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nMerging both lists.\n";
	vector<int> allScores{};
	
	allScores.push_back(scores[0]);
	allScores.push_back(scores[1]);
	allScores.push_back(scores[2]);
	allScores.push_back(moreScores[0]);
	allScores.push_back(moreScores[1]);
	allScores.push_back(moreScores[2]);

	/*vector<int> allScores{6};
	merge(scores.begin(), scores.end(),
		moreScores.begin(), moreScores.end(),
		back_inserter(allScores));*/

	/*merge(scores.begin(), scores.end(),
		moreScores.begin(), moreScores.end(),
		allScores.begin());*/

	cout << "\nAll High Scores:\n";
	for (iter = allScores.begin(); iter != allScores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	cout << "\nCreating a 10 element vector to hold scores.\n";
	vector<int> scores2(10, 0);
	cout << "Vextor scores2 size is: " << scores2.size() << endl;
	cout << "Vector scores2 capacity is: " << scores2.capacity() << endl;

	cout << "\nAdding a score.\n";
	scores2.push_back(0);
	cout << "Vextor scores2 size is: " << scores2.size() << endl;
	cout << "Vector scores2 capacity is: " << scores2.capacity() << endl;

	cout << "\nCreating a list of scores.\n";
	vector<int> scores3(10, 0);
	cout << "Vextor scores2 size is: " << scores3.size() << endl;
	cout << "Vector scores2 capacity is: " << scores3.capacity() << endl;

	cout << "\nReserving more memory.\n";
	scores3.reserve(20);
	cout << "Vextor scores2 size is: " << scores3.size() << endl;
	cout << "Vector scores2 capacity is: " << scores3.capacity() << endl;
}