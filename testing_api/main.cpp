#include "test.h"

bool IsPalindrom(const string& str) {
	if (str.size() < 2) { return true; }
	size_t size = str.size();
	size_t last_pos = size - 1;
	for (size_t i = 0; i < size / 2; i++) {
		if (str[i] != str[last_pos - i]) { return false; }
	}
	return true;
}

void		testIsPalindrom() {
	AssertEqual(IsPalindrom(""), true, "Empty string");
	AssertEqual(IsPalindrom(" "), true, "String ' '");
	AssertEqual(IsPalindrom("a"), true, "String 'a'");
	AssertEqual(IsPalindrom("."), true, "String '.'");
	AssertEqual(IsPalindrom("  "), true, "String '  '");
	AssertEqual(IsPalindrom("aa"), true, "String 'aa'");
	AssertEqual(IsPalindrom(".."), true, "String '..'");
	AssertEqual(IsPalindrom(" . "), true, "String ' . '");
	AssertEqual(IsPalindrom("a a"), true, "String 'a a'");
	AssertEqual(IsPalindrom(".a."), true, "String '.a.'");
	AssertEqual(IsPalindrom(". a ."), true, "String '. a .'");
	AssertEqual(IsPalindrom(". aa ."), true, "String '. aa .'");
	AssertEqual(IsPalindrom("madam"), true, "String 'madam'");
	AssertEqual(IsPalindrom("level"), true, "String 'level'");
	AssertEqual(IsPalindrom("wasitacaroracatisaw"), true, "String 'wasitacaroracatisaw'");
	AssertEqual(IsPalindrom(" ."), false, "String ' .'");
	AssertEqual(IsPalindrom(" a"), false, "String ' a'");
	AssertEqual(IsPalindrom(". "), false, "String '. '");
	AssertEqual(IsPalindrom("z. "), false, "String 'z. '");
	AssertEqual(IsPalindrom("a ."), false, "String 'a .'");
	AssertEqual(IsPalindrom(" a."), false, "String ' a.'");
	AssertEqual(IsPalindrom(".0a ."), false, "String '.0a .'");
	AssertEqual(IsPalindrom(". ba ."), false, "String '. ba .'");
}

int main() {
	TestRunner runner;
	runner.RunTest(testIsPalindrom, "Test palindrom");
	return 0;
}
