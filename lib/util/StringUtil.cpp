//
// Created by youhei on 17/05/10.
//

#include <EastWidthAsian.h>
#include <iostream>
#include "StringUtil.h"
#include <codecvt>
#include <locale>

int string_util::get_size ()
{
  unsigned int len = 0;
  int pos;
  unsigned char lead;
  int char_size = 0;

  for (pos = 0; pos < word_.size (); pos += char_size)
    {
      lead = (unsigned char) word_[pos];
      if (lead < 0x80)
        {
          char_size = 1;
        }
      else if (lead < 0xE0)
        {
          char_size = 2;
        }
      else if (lead < 0xF0)
        {
          char_size = 3;
        }
      else
        {
          char_size = 4;
        }

      len++;
    }
  return len;
}

int string_util::get_asian_width ()
{

  int width = 0;

  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> cv;
  std::u32string w32word = cv.from_bytes (word_);
  for (char32_t &c : w32word)
    {
      int charcode = (int) c;

      for (int i = 0; i < east_width_asian::codelist_size; i++)
        {
          if (east_width_asian::width_char_code[i][0] <= charcode)
            {
              if (charcode <= east_width_asian::width_char_code[i][1])
                {
                  width += 2;
                  break;
                }
            }
          else
            {
              width++;
              break;
            }
        }

    }
  return width;
}

unsigned int string_util::get_char_code (std::string c)
{
  unsigned int charcode = 0;
  int size = (int) c.size ();
  unsigned char lead;
  for (int i = 0; i < size; i++)
    {
      lead = (unsigned char) c[i];
      charcode |= (lead << (size - i - 1) * 8);
    }
  return charcode;
}

string_util::string_util (std::string word)
{
  word_ = word;

}

string_util::string_util (std::u32string word)
{
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter;
  word_ = converter.to_bytes (word);

}


