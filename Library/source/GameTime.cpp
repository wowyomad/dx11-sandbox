#include "GameTime.h"

namespace Library 
{
	using namespace std::chrono;

	const high_resolution_clock::time_point& GameTime::CurrentTime() const
	{
		return mCurrentTime;
	}
	void GameTime::SetCurrentTime(const high_resolution_clock::time_point& currentTime)
	{
		mCurrentTime = currentTime;
	}
	const std::chrono::milliseconds GameTime::TotalGameTime() const
	{
		return mTotalGameTime;
	}
	void GameTime::SetTotalGameTime(const milliseconds& totalGameTime)
	{
		mTotalGameTime = totalGameTime;
	}
	const std::chrono::milliseconds& GameTime::ElapsedGameTime() const
	{
		return mElapsedTime;
	}
	void GameTime::SetElapsedGameTime(const std::chrono::milliseconds& elapsedGameTime)
	{
		mElapsedTime = elapsedGameTime;
	}
	duration<float> GameTime::TotalGameTimeSeconds() const
	{
		return duration_cast<duration<float>>(mTotalGameTime);
	}
	duration<float> GameTime::ElapsedGameTimeSeconds() const
	{
		return duration_cast<duration<float>>(mElapsedTime);
	}
}