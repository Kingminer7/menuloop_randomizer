#pragma once

class PlayingCard : public cocos2d::CCNode {
  protected:
	bool init(gd::string);

  public:
	static PlayingCard *create(gd::string);
	cocos2d::CCPoint position = {613, 115};
};