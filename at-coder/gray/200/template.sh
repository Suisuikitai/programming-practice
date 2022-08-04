#!/bin/sh

read name
filename="${name}.cpp"
echo '#include <bits/stdc++.h>' >> $filename
echo 'using namespace std;' >> $filename
echo '#define rep(i, x) for (int i = 0; i < x; i++)' >> $filename
echo 'template <class T> void chmax(T &a, T b) { if (a < b) a = b; }' >> $filename
echo 'template <class T> void chmin(T &a, T b) { if (a > b) a = b; }' >> $filename
echo '' >> $filename
echo 'int main(int argc, char const *argv[])' >> $filename
echo '{' >> $filename
echo '  ios::sync_with_stdio(false);' >> $filename
echo '  cin.tie(0);' >> $filename
echo '	' >> $filename
echo '	return 0;' >> $filename
echo '}' >> $filename