#pragma once
#include <iostream>
#include <string>
#include <vector>

class CompareVersionNumbers
{
public:
	CompareVersionNumbers(){}
	int compareVersion(std::string version1, std::string version2)
	{
		std::vector<int> version1Int = convert(version1);
		std::vector<int> version2Int = convert(version2);
		int i = 0;
		while (1)
		{
			if (i > version1Int.size()-1 && i < version2Int.size())
			{
				bool flag = false;
				for (; i < version2Int.size(); i++)
				{
					if (version2Int[i] > 0)
					{
						return -1;
					}
					
				}
				return 0;
			}
			else if (i > version2Int.size()-1 && i < version1Int.size())
			{
				for (; i < version1Int.size(); i++)
				{
					if (version1Int[i] > 0)
					{
						return 1;
					}
				}
				return 0;
			}
			else if (i > version1Int.size()-1 && i > version2Int.size()-1)
			{
				break;
			}

			if (version1Int[i] > version2Int[i])
			{
				return 1;
			}
			else if (version2Int[i] > version1Int[i])
			{
				return -1;
			}
			i++;
		}
		return 0;
	}
	std::vector<int> convert(std::string version)
	{
		
		int lastDotIdx = -1;
		std::vector<int> versionInts;
		for (int i = 0; i < version.length(); i++)
		{
			if (version[i] == '.')
			{
				std::string subStr = version.substr(lastDotIdx+1, i - lastDotIdx-1);
				int verInt = std::atoi(subStr.c_str());
				versionInts.push_back(verInt);
				lastDotIdx = i;
			}
		}
		if (lastDotIdx == -1)
		{
			versionInts.push_back(atoi(version.c_str()));
		}
		else
		{
			versionInts.push_back(atoi(version.substr(lastDotIdx+1, version.length()-1-lastDotIdx).c_str()));
		}
		return versionInts;
	}
};