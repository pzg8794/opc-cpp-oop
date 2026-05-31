#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string WallPost::get_name()
{
	return PosterName;
}

string WallPost::get_comment()
{
	return comment;
}

void WallPost::set_name(string Name)
{
	