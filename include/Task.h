//
// Created by youhei on 17/05/14.
//

#ifndef TERMINALRPG_TASK_H
#define TERMINALRPG_TASK_H

class Task {
 public:
  virtual ~Task(){}
  /**
   * 初期化処理
   */
  virtual void initialize(){};
  /**
   * 終了処理
   */
  virtual void finalize() {};
  /**
   * 更新処理
   */
  virtual void update() = 0;
  /**
   * 描画処理
   */
  virtual void draw() = 0;

};

#endif //TERMINALRPG_TASK_H
