#pragma once
#include<iostream>
#include<vector>
#include<algorithm>

namespace sort {

	template<typename T,typename A>
	void quickSort(std::vector<T,A>&v, int begin, int end) {
		if (begin >= end)
			return;

		int pivot = end, i = begin, j = end;
		while (i < j) {
			if (v[pivot] <= v[i]) {
				std::swap(v[i], v[j]);
				j--;
			}
			else {
				i++;
			}
		}
		if (v[pivot] <= v[j])
			std::swap(v[pivot], v[j]);
		else
			std::swap(v[pivot], v[j + 1]);

		sort::quickSort(v, begin, pivot - 1);
		sort::quickSort(v, pivot + 1, end);
	};

}

namespace sort {

}