#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

template <typename T> T Sqr(const T& n);
template <typename First, typename Second> pair<First, Second> Sqr(const pair<First, Second>& p);
template <typename T> vector<T> Sqr(const vector<T>& v);
template <typename Key, typename Value> map<Key, Value> Sqr(const map<Key, Value>& m);


template <typename T>
T			operator*(const T& lhs, const T& rhs) {
	return (lhs * rhs);
}

template <typename T>
T						Sqr(const T& n) {
	return (n * n);
}

template <typename First, typename Second>
pair<First, Second> 	Sqr(const pair<First, Second>& p) {
	return {Sqr(p.first), Sqr(p.second)};
}

template <typename T>
vector<T>	Sqr(vector<T>& v) {
	vector<T> res;
	for (auto& n : v) {
		res.push_back(Sqr(n));
	}
	return (res);
}
 
template <typename Key, typename Value>
map<Key, Value>		Sqr(const map<Key, Value>& m) {
	map<Key, Value> res;
	for (auto& [key, value] : m) {
		res[key] = Sqr(value);
	}
	return (res);
}

int 		main(void) {
	vector<int> v = {1, 2, 3};
	cout << "vector:";
	for (int x : Sqr(v)) {
		cout << ' ' << x;
	}
	cout << endl;

	map<int, pair<int, float>> map_of_pairs = {
		{4, {2, 2.25}},
		{7, {4, 3}}
	};
	cout << "map of pairs:" << endl;
	for (const auto& x : Sqr(map_of_pairs)) {
		cout << x.first << ' ' << x.second.first << ' ' << x.second.second << endl;
	}
	return (0);
}
