#include <string>
#define ABS(a) (((a) > 0) ? (a) : (-(a)))

class SimilarityChecker {
public:
	int getScore(const std::string& str1, const std::string& str2) {
		if (str1.length() == str2.length()) return 60;
		if (isLengthGapInvalid(str1, str2)) return 0;
		return getPartScore(str1, str2);
	}
	int getPartScore(const std::string& str1, const std::string& str2)
	{
		int signed_gap = str1.length() - str2.length();
		int gap = ABS(signed_gap);
		int shorter_length = 
			str1.length() < str2.length() ? str1.length() : str2.length();
		return 60 - 60 * gap / shorter_length;
	}
	bool isLengthGapInvalid(const std::string& str1, const std::string& str2)
	{
		return str1.length() * 2 <= str2.length()
			|| str1.length() >= str2.length() * 2;
	}
};