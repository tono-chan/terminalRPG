//
// Created by youhei on 17/05/14.
//

#include "BaseScene.h"
#include "KeyboardManager.h"

void BaseScene::activate ()
{
  keyConnect = KeyboardManager::Instance ()->key_push_signal.connect (
      boost::bind (&BaseScene::key_handle, this, _1)
  );

}
