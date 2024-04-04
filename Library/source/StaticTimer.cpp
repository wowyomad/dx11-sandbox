#include <StaticTimer.h>

namespace Library 
{
	using namespace std::chrono;

	std::chrono::high_resolution_clock::time_point StaticTimer::mStartTime;
	std::chrono::high_resolution_clock::time_point StaticTimer::mCurrentTime;
	std::chrono::high_resolution_clock::time_point StaticTimer::mLastTime;

	const double StaticTimer::DeltaTime()
	{
		return duration<double>(mCurrentTime - mLastTime).count();
	}
	void StaticTimer::Update()
	{
		mLastTime = mCurrentTime;
		mCurrentTime = high_resolution_clock::now();

	}

	void StaticTimer::Reset()
	{
		mStartTime = mCurrentTime = mLastTime = high_resolution_clock::now();
	}
}
