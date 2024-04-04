#pragma once

#include <chrono>
namespace Library {
	class __declspec(dllexport) StaticTimer {
	private:
		StaticTimer() = delete;
		StaticTimer(const StaticTimer&) = delete;
		StaticTimer(StaticTimer&&) = delete;

	public:
		static const double DeltaTime();
		static void Update();
		static void Reset();

	private:
		static std::chrono::high_resolution_clock::time_point mStartTime;
		static std::chrono::high_resolution_clock::time_point mCurrentTime;
		static std::chrono::high_resolution_clock::time_point mLastTime;

	};
}
