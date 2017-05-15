//
// Created by youhei on 17/05/15.
//

#ifndef TERMINALRPG_SINGLETON_H
#define TERMINALRPG_SINGLETON_H

template <typename _T>
class Singleton {

 protected:
  Singleton() {}
  virtual ~Singleton (){}
  Singleton(const Singleton& r){}
  Singleton&operator=(const Singleton& r){}

 public:
  static _T* Instance() {
    static _T inst;
    return &inst;
  }

};


#endif //TERMINALRPG_SINGLETON_H
