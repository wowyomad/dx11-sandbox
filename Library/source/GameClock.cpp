#include "GameTime.h"
#include "GameClock.h"
using namespace std::chrono;

namespace Library
{

	GameClock::GameClock()
	{
		Reset();
	}

	const high_resolution_clock::time_point& GameClock::StartTime() const
	{
		return mStartTime;
	}

	const high_resolution_clock::time_point& GameClock::CurrentTime() const
	{
		return mCurrentTime;
	}

	const high_resolution_clock::time_point& GameClock::LastTime() const
	{
		return mLastTime;
	}



	void GameClock::Reset()
	{
		mStartTime = mLastTime = mCurrentTime = high_resolution_clock::now();
	}


	void GameClock::UpdateGameTime(GameTime& gameTime)
	{
		mCurrentTime = high_resolution_clock::now();

		gameTime.SetCurrentTime(mCurrentTime);
		gameTime.SetTotalGameTime(duration_cast<milliseconds>(mLastTime - mStartTime));
		gameTime.SetElapsedGameTime(duration_cast<milliseconds>(mLastTime - mCurrentTime));


		mLastTime = mCurrentTime;
	}

}







