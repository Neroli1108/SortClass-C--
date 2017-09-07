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
	template<typename T, typename A>
	void selectionSort(std::vector<T, A>&v) {
		T min = v[0];
		int i = 0, minIndex = -1;
		while (i != v.size() - 1) {
			int j = i + 1;
			while (j != v.size()) {
				if (v[j] < min) {
					min = v[j];
					minIndex = j;
				}
				j++;
			}
			std::swap(v[i], v[minIndex]);
			i++;
			min = v[i];
		}
	}
}

namespace sort {
	template<typename T, typename A>
	void InsertionSort(std::vector<T, A>&v) {
		int i = 0;
		while (i != v.size()) {
			T tmp = v[i];
			int j = i - 1;
			while (j >= 0 && v[j] > tmp) {
				v[j + 1] = v[j];
				j--;
			}
			v[j + 1] = tmp;
			i++;
		}
	}
}