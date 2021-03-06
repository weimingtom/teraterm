TTXAdditionalTitle -- 追加のタイトル文字列を付加する

機能:
  リモートからのタイトル変更要求受信時に、タイトル文字列の先頭または末尾に
  追加の文字列を付加するように出来ます。
  現状では設定用UIが無いため、設定を変更するにはTera Termの設定ファイルを
  直接編集する必要があります。

設定:
  Tera Termの設定ファイル(TERATERM.INI)に、[AdditionalTitle]セクションを
  作成して設定します。
  現在のところ、以下の設定があります。

  AdditionalTitle:
    追加する文字列を指定します。

  AddMode:
    どこに追加するかを指定します。
    以下のどれかを指定してください。
      Off    -- 追加しない
      Top    -- 先頭に追加する
      Bottom -- 末尾に追加する

設定例:
  [AdditionalTitle]
  AdditionalTitle = "Title: "
  AddMode = Top

解説:
  受信データをフックして監視し、タイトル変更要求を受信時に設定に従って
  タイトルを変更しています。
  Tera Term本体のタイトル変更要求処理でタイトルが上書きされるのを防ぐため、
  AddModeがOff以外の時は起動時にAcceptTitleChangeRequestを強制的にFALSEに
  設定しています。

バグ:
  ・制御シーケンスのパース部分は少々いい加減です。
  ・Tera Term 4.61で同等の機能がTera Term本体に追加されました。
  ・シリアル接続で使用するにはTera Term 4.60以降が必要です。
  ・Tera Term本体のタイトル変更要求に対する処理を止める必要があるため、
    正常に動作するにはTera Term 4.60以降が必要です。
  ・タイトル文字列の漢字コード変換にはまだ対応していません。

ToDo:
  ・設定用ダイアログで設定変更出来るようにする。
  ・Tera Term 4.59およびそれ以前でも使えるバージョンを作成する。
