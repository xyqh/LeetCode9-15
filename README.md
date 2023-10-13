LeetCode题库：《面试经典150题》

https://leetcode.cn/studyplan/top-interview-150/

## 数组/字符串：

### 88. 合并两个有序数组

> 给你两个按 **非递减顺序** 排列的整数数组 `nums1` 和 `nums2`，另有两个整数 `m` 和 `n` ，分别表示 `nums1` 和 `nums2` 中的元素数目。
>
> 请你 **合并** `nums2` 到 `nums1` 中，使合并后的数组同样按 **非递减顺序** 排列。
>
> **注意：** 最终，合并后数组不应由函数返回，而是存储在数组 `nums1` 中。为了应对这种情况，`nums1` 的初始长度为 `m + n`，其中前 `m` 个元素表示应合并的元素，后 `n` 个元素为 `0` ，应忽略。`nums2` 的长度为 `n` 。

### 27. 移除元素

> 给你一个数组 `nums` 和一个值 `val`，你需要 **[原地](https://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)** 移除所有数值等于 `val` 的元素，并返回移除后数组的新长度。
>
> 不要使用额外的数组空间，你必须仅使用 `O(1)` 额外空间并  **[原地 ](https://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)修改输入数组** 。
>
> 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

### 26. 删除有序数组中的重复项

> 给你一个 **升序排列** 的数组 `nums` ，请你**[ 原地](http://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)** 删除重复出现的元素，使每个元素 **只出现一次** ，返回删除后数组的新长度。元素的 **相对顺序** 应该保持 **一致** 。然后返回 `nums` 中唯一元素的个数。
>
> 考虑 `nums` 的唯一元素的数量为 `k` ，你需要做以下事情确保你的题解可以被通过：
>
> * 更改数组 `nums` ，使 `nums` 的前 `k` 个元素包含唯一元素，并按照它们最初在 `nums` 中出现的顺序排列。`nums` 的其余元素与 `nums` 的大小不重要。
> * 返回 `k` 。

### 80. 删除有序数组中的重复项Ⅱ

> 给你一个有序数组 `nums` ，请你**[ 原地](http://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)** 删除重复出现的元素，使得出现次数超过两次的元素**只出现两次** ，返回删除后数组的新长度。
>
> 不要使用额外的数组空间，你必须在 **[原地 ](https://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)修改输入数组 **并在使用 O(1) 额外空间的条件下完成。

### 169. 多数元素

> 给定一个大小为 `n` 的数组 `nums` ，返回其中的多数元素。多数元素是指在数组中出现次数 **大于** `⌊ n/2 ⌋` 的元素。
>
> 你可以假设数组是非空的，并且给定的数组总是存在多数元素。

### 189. 轮转数组

> 给定一个整数数组 `nums`，将数组中的元素向右轮转 `k` 个位置，其中 `k` 是非负数。

### 121. 买卖股票的最佳时机

> 给定一个数组 `prices` ，它的第 `i` 个元素 `prices[i]` 表示一支给定股票第 `i` 天的价格。
>
> 你只能选择 **某一天** 买入这只股票，并选择在 **未来的某一个不同的日子** 卖出该股票。设计一个算法来计算你所能获取的最大利润。
>
> 返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 `0` 。

### 122. 买卖股票的最佳时机Ⅱ

> 给你一个整数数组 `prices` ，其中 `prices[i]` 表示某支股票第 `i` 天的价格。
>
> 在每一天，你可以决定是否购买和/或出售股票。你在任何时候 **最多** 只能持有 **一股** 股票。你也可以先购买，然后在 **同一天** 出售。
>
> 返回 *你能获得的 **最大** 利润* 。

### 55. 跳跃游戏

> 给你一个非负整数数组 `nums` ，你最初位于数组的 **第一个下标** 。数组中的每个元素代表你在该位置可以跳跃的最大长度。
>
> 判断你是否能够到达最后一个下标，如果可以，返回 `true` ；否则，返回 `false` 。

### 45. 跳跃游戏Ⅱ

> 给定一个长度为 `n` 的 **0 索引**整数数组 `nums`。初始位置为 `nums[0]`。
>
> 每个元素 `nums[i]` 表示从索引 `i` 向前跳转的最大长度。换句话说，如果你在 `nums[i]` 处，你可以跳转到任意 `nums[i + j]` 处:
>
> * `0 <= j <= nums[i]`
> * `i + j < n`
>
> 返回到达 `nums[n - 1]` 的最小跳跃次数。生成的测试用例可以到达 `nums[n - 1]`。

### 274. H指数

> 给你一个整数数组 `citations` ，其中 `citations[i]` 表示研究者的第 `i` 篇论文被引用的次数。计算并返回该研究者的  **`h` 指数** 。
>
> 根据维基百科上 [h 指数的定义](https://baike.baidu.com/item/h-index/3991452?fr=aladdin)：`h` 代表“高引用次数” ，一名科研人员的 `h`** 指数 **是指他（她）至少发表了 `h` 篇论文，并且每篇论文** 至少** 被引用 `h` 次。如果 `h` 有多种可能的值，**`h` 指数 **是其中最大的那个。

### 380. （没做）o(1)时间插入、删除和获取随机元素

> 实现 `RandomizedSet` 类：
>
> * `RandomizedSet()` 初始化 `RandomizedSet` 对象
> * `bool insert(int val)` 当元素 `val` 不存在时，向集合中插入该项，并返回 `true` ；否则，返回 `false` 。
> * `bool remove(int val)` 当元素 `val` 存在时，从集合中移除该项，并返回 `true` ；否则，返回 `false` 。
> * `int getRandom()` 随机返回现有集合中的一项（测试用例保证调用此方法时集合中至少存在一个元素）。每个元素应该有 **相同的概率** 被返回。
>
> 你必须实现类的所有函数，并满足每个函数的 **平均** 时间复杂度为 `O(1)` 。

### 238. 除自身以外数组的乘积

> 给你一个整数数组 `nums`，返回 *数组 `answer` ，其中 `answer[i]` 等于 `nums` 中除 `nums[i]` 之外其余各元素的乘积* 。
>
> 题目数据 **保证** 数组 `nums`之中任意元素的全部前缀元素和后缀的乘积都在  **32 位** 整数范围内。
>
> 请  **不要使用除法，** 且在 `O(<em>n</em>)` 时间复杂度内完成此题。

### 134. 加油站

> 在一条环路上有 `n` 个加油站，其中第 `i` 个加油站有汽油 `gas[i]` 升。
>
> 你有一辆油箱容量无限的的汽车，从第 `i` 个加油站开往第 `i+1` 个加油站需要消耗汽油 `cost[i]` 升。你从其中的一个加油站出发，开始时油箱为空。
>
> 给定两个整数数组 `gas` 和 `cost` ，如果你可以按顺序绕环路行驶一周，则返回出发时加油站的编号，否则返回 `-1` 。如果存在解，则 **保证** 它是 **唯一** 的。

### 135. 分发糖果

> `n` 个孩子站成一排。给你一个整数数组 `ratings` 表示每个孩子的评分。
>
> 你需要按照以下要求，给这些孩子分发糖果：
>
> * 每个孩子至少分配到 `1` 个糖果。
> * 相邻两个孩子评分更高的孩子会获得更多的糖果。
>
> 请你给每个孩子分发糖果，计算并返回需要准备的 **最少糖果数目** 。

### 13. 罗马数字转整数

> 罗马数字包含以下七种字符: `I`， `V`， `X`， `L`，`C`，`D` 和 `M`。
>
> <pre><strong>字符</strong>          <strong>数值</strong>
> I             1
> V             5
> X             10
> L             50
> C             100
> D             500
> M             1000</pre>
>
> 例如， 罗马数字 `2` 写做 `II` ，即为两个并列的 1 。`12` 写做 `XII` ，即为 `X` + `II` 。 `27` 写做  `XXVII`, 即为 `XX` + `V` + `II` 。
>
> 通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 `IIII`，而是 `IV`。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 `IX`。这个特殊的规则只适用于以下六种情况：
>
> * `I` 可以放在 `V` (5) 和 `X` (10) 的左边，来表示 4 和 9。
> * `X` 可以放在 `L` (50) 和 `C` (100) 的左边，来表示 40 和 90。
> * `C` 可以放在 `D` (500) 和 `M` (1000) 的左边，来表示 400 和 900。
>
> 给定一个罗马数字，将其转换成整数。

### 12. 整数转罗马数字

> 罗马数字包含以下七种字符： `I`， `V`， `X`， `L`，`C`，`D` 和 `M`。
>
> <pre><strong>字符</strong>          <strong>数值</strong>
> I             1
> V             5
> X             10
> L             50
> C             100
> D             500
> M             1000</pre>
>
> 例如， 罗马数字 2 写做 `II` ，即为两个并列的 1。12 写做 `XII` ，即为 `X` + `II` 。 27 写做  `XXVII`, 即为 `XX` + `V` + `II` 。
>
> 通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 `IIII`，而是 `IV`。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 `IX`。这个特殊的规则只适用于以下六种情况：
>
> * `I` 可以放在 `V` (5) 和 `X` (10) 的左边，来表示 4 和 9。
> * `X` 可以放在 `L` (50) 和 `C` (100) 的左边，来表示 40 和 90。
> * `C` 可以放在 `D` (500) 和 `M` (1000) 的左边，来表示 400 和 900。
>
> 给你一个整数，将其转为罗马数字。

### 58. 最后一个单词的长度

> 给你一个字符串 `s`，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 **最后一个** 单词的长度。
>
> **单词** 是指仅由字母组成、不包含任何空格字符的最大子字符串。

### 14. 最长公共前缀

> 编写一个函数来查找字符串数组中的最长公共前缀。
>
> 如果不存在公共前缀，返回空字符串 `""`。

### 151. 反转字符串中的单词

> 给你一个字符串 `s` ，请你反转字符串中 **单词** 的顺序。
>
> **单词** 是由非空格字符组成的字符串。`s` 中使用至少一个空格将字符串中的 **单词** 分隔开。
>
> 返回 **单词** 顺序颠倒且 **单词** 之间用单个空格连接的结果字符串。
>
> **注意：** 输入字符串 `s`中可能会存在前导空格、尾随空格或者单词间的多个空格。返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。

### 6. N字形变换

> 将一个给定字符串 `s` 根据给定的行数 `numRows` ，以从上往下、从左到右进行 Z 字形排列。
>
> 比如输入字符串为 `"PAYPALISHIRING"` 行数为 `3` 时，排列如下：
>
> ```
> P   A   H   N
> A P L S I I G
> Y   I   R
> ```
>
> 之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如：`"PAHNAPLSIIGYIR"`。
>
> <pre><strong>输入：</strong>s = "PAYPALISHIRING", numRows = 4
> <strong>输出：</strong>"PINALSIGYAHRPI"
> <strong>解释：</strong>
> P     I    N
> A   L S  I G
> Y A   H R
> P     I</pre>

### 28. （没做）找出字符串中第一个匹配项的下标

> 给你两个字符串 `haystack` 和 `needle` ，请你在 `haystack` 字符串中找出 `needle` 字符串的第一个匹配项的下标（下标从 0 开始）。如果 `needle` 不是 `haystack` 的一部分，则返回  `-1` 。

### 68. 文本左右对齐

> 给定一个单词数组 `words` 和一个长度 `maxWidth` ，重新排版单词，使其成为每行恰好有 `maxWidth` 个字符，且左右两端对齐的文本。
>
> 你应该使用 “ **贪心算法** ” 来放置给定的单词；也就是说，尽可能多地往每行中放置单词。必要时可用空格 `' '` 填充，使得每行恰好有 *maxWidth* 个字符。
>
> 要求尽可能均匀分配单词间的空格数量。如果某一行单词间的空格不能均匀分配，则左侧放置的空格数要多于右侧的空格数。
>
> 文本的最后一行应为左对齐，且单词之间不插入**额外的**空格。
>
> **注意:**
>
> * 单词是指由非空格字符组成的字符序列。
> * 每个单词的长度大于 0，小于等于  *maxWidth* 。
> * 输入单词数组 `words` 至少包含一个单词。

## 双指针

### 125. 验证回文串

> 如果在将所有大写字符转换为小写字符、并移除所有非字母数字字符之后，短语正着读和反着读都一样。则可以认为该短语是一个 **回文串** 。
>
> 字母和数字都属于字母数字字符。
>
> 给你一个字符串 `s`，如果它是 **回文串** ，返回 `true` ；否则，返回 `false` 。

### 392. 判断子序列

> 给定字符串 **s** 和 **t** ，判断 **s** 是否为 **t** 的子序列。
>
> 字符串的一个子序列是原始字符串删除一些（也可以不删除）字符而不改变剩余字符相对位置形成的新字符串。（例如，`"ace"`是 `"abcde"`的一个子序列，而 `"aec"`不是）。
>
> **进阶：**
>
> 如果有大量输入的 S，称作 S1, S2, ... , Sk 其中 k >= 10亿，你需要依次检查它们是否为 T 的子序列。在这种情况下，你会怎样改变代码？

### 167. 两数之和Ⅱ - 输入有序数组

> 给你一个下标从 **1** 开始的整数数组 `numbers` ，该数组已按 ** 非递减顺序排列  ** ，请你从数组中找出满足相加之和等于目标数 `target` 的两个数。如果设这两个数分别是 `numbers[index<sub>1</sub>]` 和 `numbers[index<sub>2</sub>]` ，则 `1 <= index<sub>1</sub> < index<sub>2</sub> <= numbers.length` 。
>
> 以长度为 2 的整数数组 `[index<sub>1</sub>, index<sub>2</sub>]` 的形式返回这两个整数的下标 `index<sub>1</sub>` 和 `index<sub>2</sub>`。
>
> 你可以假设每个输入 **只对应唯一的答案** ，而且你 **不可以** 重复使用相同的元素。
>
> 你所设计的解决方案必须只使用常量级的额外空间。

### 11. 盛最多水的容器

> 给定一个长度为 `n` 的整数数组 `height` 。有 `n` 条垂线，第 `i` 条线的两个端点是 `(i, 0)` 和 `(i, height[i])` 。
>
> 找出其中的两条线，使得它们与 `x` 轴共同构成的容器可以容纳最多的水。
>
> 返回容器可以储存的最大水量。
>
> **说明：** 你不能倾斜容器。

### 15. 三数之和

> 给你一个整数数组 `nums` ，判断是否存在三元组 `[nums[i], nums[j], nums[k]]` 满足 `i != j`、`i != k` 且 `j != k` ，同时还满足 `nums[i] + nums[j] + nums[k] == 0` 。请
>
> 你返回所有和为 `0` 且不重复的三元组。
>
> **注意：** 答案中不可以包含重复的三元组。

## 滑动窗口

### 209. 长度最小的子数组

> 给定一个含有 `n` 个正整数的数组和一个正整数 `target`** 。**
>
> 找出该数组中满足其总和大于等于 `target` 的长度最小的 **连续子数组** `[nums<sub>l</sub>, nums<sub>l+1</sub>, ..., nums<sub>r-1</sub>, nums<sub>r</sub>]` ，并返回其长度 **。** 如果不存在符合条件的子数组，返回 `0` 。

### 3. 无重复字符的最长子串

> 给定一个字符串 `s` ，请你找出其中不含有重复字符的 **最长子串 **的长度。

### 30. 串联所有单词的子串

> 给定一个字符串 `s` 和一个字符串数组 `words`**。**`words` 中所有字符串  **长度相同** 。
>
> `s` 中的 **串联子串** 是指一个包含  `words` 中所有字符串以任意顺序排列连接起来的子串。
>
> * 例如，如果 `words = ["ab","cd","ef"]`， 那么 `"abcdef"`， `"abefcd"`，`"cdabef"`， `"cdefab"`，`"efabcd"`， 和 `"efcdab"` 都是串联子串。 `"acdbef"` 不是串联子串，因为他不是任何 `words` 排列的连接。
>
> 返回所有串联子串在 `s` 中的开始索引。你可以以 **任意顺序** 返回答案。

### 31. 最小覆盖子串

> 给你一个字符串 `s` 、一个字符串 `t` 。返回 `s` 中涵盖 `t` 所有字符的最小子串。如果 `s` 中不存在涵盖 `t` 所有字符的子串，则返回空字符串 `""` 。

## 矩阵

### 36. 有效的数独

> 请你判断一个 `9 x 9` 的数独是否有效。只需要** 根据以下规则** ，验证已经填入的数字是否有效即可。
>
> 1. 数字 `1-9` 在每一行只能出现一次。
> 2. 数字 `1-9` 在每一列只能出现一次。
> 3. 数字 `1-9` 在每一个以粗实线分隔的 `3x3` 宫内只能出现一次。（请参考示例图）
>
> **注意：**
>
> * 一个有效的数独（部分已被填充）不一定是可解的。
> * 只需要根据以上规则，验证已经填入的数字是否有效即可。
> * 空白格用 `'.'` 表示。

### 54. 螺旋矩阵

> 给你一个 `m` 行 `n` 列的矩阵 `matrix` ，请按照 **顺时针螺旋顺序** ，返回矩阵中的所有元素。

### 48. 旋转图像

> 给定一个  *n * × *n* 的二维矩阵 `matrix` 表示一个图像。请你将图像顺时针旋转 90 度。
>
> 你必须在**[ 原地](https://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)** 旋转图像，这意味着你需要直接修改输入的二维矩阵。**请不要 **使用另一个矩阵来旋转图像。

### 73. 矩阵置零

> 给定一个 `<em>m</em> x <em>n</em>` 的矩阵，如果一个元素为  **0 ** ，则将其所在行和列的所有元素都设为 **0** 。请使用 **[原地](http://baike.baidu.com/item/%E5%8E%9F%E5%9C%B0%E7%AE%97%E6%B3%95)** 算法**。**

### 289. 生命游戏

> 根据 [百度百科](https://baike.baidu.com/item/%E7%94%9F%E5%91%BD%E6%B8%B8%E6%88%8F/2926434?fr=aladdin) ， **生命游戏** ，简称为 **生命** ，是英国数学家约翰·何顿·康威在 1970 年发明的细胞自动机。
>
> 给定一个包含 `m × n` 个格子的面板，每一个格子都可以看成是一个细胞。每个细胞都具有一个初始状态： `1` 即为 **活细胞** （live），或 `0` 即为 **死细胞** （dead）。每个细胞与其八个相邻位置（水平，垂直，对角线）的细胞都遵循以下四条生存定律：
>
> 1. 如果活细胞周围八个位置的活细胞数少于两个，则该位置活细胞死亡；
> 2. 如果活细胞周围八个位置有两个或三个活细胞，则该位置活细胞仍然存活；
> 3. 如果活细胞周围八个位置有超过三个活细胞，则该位置活细胞死亡；
> 4. 如果死细胞周围正好有三个活细胞，则该位置死细胞复活；
>
> 下一个状态是通过将上述规则同时应用于当前状态下的每个细胞所形成的，其中细胞的出生和死亡是同时发生的。给你 `m x n` 网格面板 `board` 的当前状态，返回下一个状态。

## 哈希表

### 383. 赎金信

> 给你两个字符串：`ransomNote` 和 `magazine` ，判断 `ransomNote` 能不能由 `magazine` 里面的字符构成。
>
> 如果可以，返回 `true` ；否则返回 `false` 。
>
> `magazine` 中的每个字符只能在 `ransomNote` 中使用一次。

### 205. 同构字符串

> 给定两个字符串 `s` 和 `t` ，判断它们是否是同构的。
>
> 如果 `s` 中的字符可以按某种映射关系替换得到 `t` ，那么这两个字符串是同构的。
>
> 每个出现的字符都应当映射到另一个字符，同时不改变字符的顺序。不同字符不能映射到同一个字符上，相同字符只能映射到同一个字符上，字符可以映射到自己本身。

### 290. 单词规律

> 给定一种规律 `pattern` 和一个字符串 `s` ，判断 `s` 是否遵循相同的规律。
>
> 这里的 **遵循 **指完全匹配，例如， `pattern` 里的每个字母和字符串 `s` 中的每个非空单词之间存在着双向连接的对应规律。

### 242. 有效的字母异位词

> 给定两个字符串 `<em>s</em>` 和 `<em>t</em>` ，编写一个函数来判断 `<em>t</em>` 是否是 `<em>s</em>` 的字母异位词。
>
> **注意：** 若 `<em>s</em>` 和 `<em>t</em>` 中每个字符出现的次数都相同，则称 `<em>s</em>` 和 `<em>t</em>` 互为字母异位词。

### 49. 字母异位词分组

> 给你一个字符串数组，请你将 **字母异位词** 组合在一起。可以按任意顺序返回结果列表。
>
> **字母异位词** 是由重新排列源单词的所有字母得到的一个新单词。

### 1. 两数之和

> 给定一个整数数组 `nums` 和一个整数目标值 `target`，请你在该数组中找出 **和为目标值 ***`target`*  的那 **两个** 整数，并返回它们的数组下标。
>
> 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
>
> 你可以按任意顺序返回答案。

### 202. 快乐数

> 编写一个算法来判断一个数 `n` 是不是快乐数。
>
> **「快乐数」** 定义为：
>
> * 对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
> * 然后重复这个过程直到这个数变为 1，也可能是 **无限循环** 但始终变不到 1。
> * 如果这个过程 **结果为** 1，那么这个数就是快乐数。
>
> 如果 `n` 是 *快乐数* 就返回 `true` ；不是，则返回 `false` 。

### 219. 存在重复元素Ⅱ

> 给你一个整数数组 `nums` 和一个整数 `k` ，判断数组中是否存在两个 **不同的索引** `i` 和 `j` ，满足 `nums[i] == nums[j]` 且 `abs(i - j) <= k` 。如果存在，返回 `true` ；否则，返回 `false` 。

### 128. 最长连续序列

> 给定一个未排序的整数数组 `nums` ，找出数字连续的最长序列（不要求序列元素在原数组中连续）的长度。
>
> 请你设计并实现时间复杂度为 `O(n)` 的算法解决此问题。

## 区间

### 228. 汇总区间

> 给定一个  **无重复元素** 的 **有序** 整数数组 `nums` 。
>
> 返回  ***恰好覆盖数组中所有数字** 的 **最小有序** 区间范围列表 * 。也就是说，`nums` 的每个元素都恰好被某个区间范围所覆盖，并且不存在属于某个范围但不属于 `nums` 的数字 `x` 。
>
> 列表中的每个区间范围 `[a,b]` 应该按如下格式输出：
>
> * `"a->b"` ，如果 `a != b`
> * `"a"` ，如果 `a == b`

### 56. 合并区间

> 以数组 `intervals` 表示若干个区间的集合，其中单个区间为 `intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]` 。请你合并所有重叠的区间，并返回 *一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间* 。

### 57. 插入区间

> 给你一个** 无重叠的** * ，* 按照区间起始端点排序的区间列表。
>
> 在列表中插入一个新的区间，你需要确保列表中的区间仍然有序且不重叠（如果有必要的话，可以合并区间）。

### 452. 用最少数量的箭引爆气球

> 有一些球形气球贴在一堵用 XY 平面表示的墙面上。墙面上的气球记录在整数数组 `points` ，其中 `points[i] = [x<sub>start</sub>, x<sub>end</sub>]` 表示水平直径在 `x<sub>start</sub>` 和 `x<sub>end</sub>`之间的气球。你不知道气球的确切 y 坐标。
>
> 一支弓箭可以沿着 x 轴从不同点 **完全垂直** 地射出。在坐标 `x` 处射出一支箭，若有一个气球的直径的开始和结束坐标为 `x` ~`start`，~ `x`~`end`，~ 且满足  `x<sub>start</sub> ≤ x ≤ x` ~`end`，~ 则该气球会被 **引爆**  ~。~ 可以射出的弓箭的数量 **没有限制** 。 弓箭一旦被射出之后，可以无限地前进。
>
> 给你一个数组 `points` ， *返回引爆所有气球所必须射出的 **最小** 弓箭数 * 。

## 栈

### 20. 有效的括号

> 给定一个只包括 `'('`，`')'`，`'{'`，`'}'`，`'['`，`']'` 的字符串 `s` ，判断字符串是否有效。
>
> 有效字符串需满足：
>
> 1. 左括号必须用相同类型的右括号闭合。
> 2. 左括号必须以正确的顺序闭合。
> 3. 每个右括号都有一个对应的相同类型的左括号。

### 71. 简化路径

> 给你一个字符串 `path` ，表示指向某一文件或目录的 Unix 风格  **绝对路径 ** （以 `'/'` 开头），请你将其转化为更加简洁的规范路径。
>
> 在 Unix 风格的文件系统中，一个点（`.`）表示当前目录本身；此外，两个点 （`..`） 表示将目录切换到上一级（指向父目录）；两者都可以是复杂相对路径的组成部分。任意多个连续的斜杠（即，`'//'`）都被视为单个斜杠 `'/'` 。 对于此问题，任何其他格式的点（例如，`'...'`）均被视为文件/目录名称。
>
> 请注意，返回的 **规范路径** 必须遵循下述格式：
>
> * 始终以斜杠 `'/'` 开头。
> * 两个目录名之间必须只有一个斜杠 `'/'` 。
> * 最后一个目录名（如果存在）**不能 **以 `'/'` 结尾。
> * 此外，路径仅包含从根目录到目标文件或目录的路径上的目录（即，不含 `'.'` 或 `'..'`）。
>
> 返回简化后得到的 **规范路径** 。

### 155. 最小栈

> 设计一个支持 `push` ，`pop` ，`top` 操作，并能在常数时间内检索到最小元素的栈。
>
> 实现 `MinStack` 类:
>
> * `MinStack()` 初始化堆栈对象。
> * `void push(int val)` 将元素val推入堆栈。
> * `void pop()` 删除堆栈顶部的元素。
> * `int top()` 获取堆栈顶部的元素。
> * `int getMin()` 获取堆栈中的最小元素。

### 150. 逆波兰表达式求值

> 给你一个字符串数组 `tokens` ，表示一个根据 [逆波兰表示法](https://baike.baidu.com/item/%E9%80%86%E6%B3%A2%E5%85%B0%E5%BC%8F/128437) 表示的算术表达式。
>
> 请你计算该表达式。返回一个表示表达式值的整数。
>
> **注意：**
>
> * 有效的算符为 `'+'`、`'-'`、`'*'` 和 `'/'` 。
> * 每个操作数（运算对象）都可以是一个整数或者另一个表达式。
> * 两个整数之间的除法总是 **向零截断** 。
> * 表达式中不含除零运算。
> * 输入是一个根据逆波兰表示法表示的算术表达式。
> * 答案及所有中间计算结果可以用 **32 位** 整数表示。

### 224. 基本计算器

> 给你一个字符串表达式 `s` ，请你实现一个基本计算器来计算并返回它的值。
>
> 注意:不允许使用任何将字符串作为数学表达式计算的内置函数，比如 `eval()` 。

## 链表

### 141. 环形链表

> 给你一个链表的头节点 `head` ，判断链表中是否有环。
>
> 如果链表中有某个节点，可以通过连续跟踪 `next` 指针再次到达，则链表中存在环。 为了表示给定链表中的环，评测系统内部使用整数 `pos` 来表示链表尾连接到链表中的位置（索引从 0 开始）。 **注意：`pos` 不作为参数进行传递 ** 。仅仅是为了标识链表的实际情况。
>
> *如果链表中存在环* ，则返回 `true` 。 否则，返回 `false` 。

### 2. 两数相加

> 给你两个 **非空** 的链表，表示两个非负的整数。它们每位数字都是按照 **逆序** 的方式存储的，并且每个节点只能存储 **一位** 数字。
>
> 请你将两个数相加，并以相同形式返回一个表示和的链表。
>
> 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。

### 21. 合并两个有序链表

> 将两个升序链表合并为一个新的 **升序** 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。

### 138. 随机链表的复制

> 给你一个长度为 `n` 的链表，每个节点包含一个额外增加的随机指针 `random` ，该指针可以指向链表中的任何节点或空节点。
>
> 构造这个链表的  **[深拷贝](https://baike.baidu.com/item/%E6%B7%B1%E6%8B%B7%E8%B4%9D/22785317?fr=aladdin)** 。 深拷贝应该正好由 `n` 个 **全新** 节点组成，其中每个新节点的值都设为其对应的原节点的值。新节点的 `next` 指针和 `random` 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。 **复制链表中的指针都不应指向原链表中的节点 ** 。
>
> 例如，如果原链表中有 `X` 和 `Y` 两个节点，其中 `X.random --> Y` 。那么在复制链表中对应的两个节点 `x` 和 `y` ，同样有 `x.random --> y` 。
>
> 返回复制链表的头节点。
>
> 用一个由 `n` 个节点组成的链表来表示输入/输出中的链表。每个节点用一个 `[val, random_index]` 表示：
>
> * `val`：一个表示 `Node.val` 的整数。
> * `random_index`：随机指针指向的节点索引（范围从 `0` 到 `n-1`）；如果不指向任何节点，则为  `null` 。
>
> 你的代码 **只** 接受原链表的头节点 `head` 作为传入参数。

### 92. 反转链表Ⅱ

> 给你单链表的头指针 `head` 和两个整数 `left` 和 `right` ，其中 `left <= right` 。请你反转从位置 `left` 到位置 `right` 的链表节点，返回 **反转后的链表** 。

### 25. K个一组翻转链表

> 给你链表的头节点 `head` ，每 `k` 个节点一组进行翻转，请你返回修改后的链表。
>
> `k` 是一个正整数，它的值小于或等于链表的长度。如果节点总数不是 `k` 的整数倍，那么请将最后剩余的节点保持原有顺序。
>
> 你不能只是单纯的改变节点内部的值，而是需要实际进行节点交换。

### 19. 删除链表的倒数第N个结点

> 给你一个链表，删除链表的倒数第 `n` 个结点，并且返回链表的头结点。

### 82. 删除排序链表中的重复元素Ⅱ

> 给定一个已排序的链表的头 `head` ， *删除原始链表中所有重复数字的节点，只留下不同的数字* 。返回 *已排序的链表* 。

### 61. 旋转链表

> 给你一个链表的头节点 `head` ，旋转链表，将链表每个节点向右移动 `k` 个位置。

### 86. 分隔链表

> 给你一个链表的头节点 `head` 和一个特定值 `x` ，请你对链表进行分隔，使得所有 **小于** `x` 的节点都出现在 **大于或等于** `x` 的节点之前。
>
> 你应当 **保留** 两个分区中每个节点的初始相对位置。

### 146. LRU缓存

> 请你设计并实现一个满足  [LRU (最近最少使用) 缓存](https://baike.baidu.com/item/LRU) 约束的数据结构。
>
> 实现 `LRUCache` 类：
>
> * `LRUCache(int capacity)` 以 **正整数** 作为容量 `capacity` 初始化 LRU 缓存
> * `int get(int key)` 如果关键字 `key` 存在于缓存中，则返回关键字的值，否则返回 `-1` 。
> * `void put(int key, int value)` 如果关键字 `key` 已经存在，则变更其数据值 `value` ；如果不存在，则向缓存中插入该组 `key-value` 。如果插入操作导致关键字数量超过 `capacity` ，则应该 **逐出** 最久未使用的关键字。
>
> 函数 `get` 和 `put` 必须以 `O(1)` 的平均时间复杂度运行。



## 二叉树

### 104. 二叉树的最大深度

> 给定一个二叉树 `root` ，返回其最大深度。
>
> 二叉树的 **最大深度** 是指从根节点到最远叶子节点的最长路径上的节点数。

### 100. 相同的树

> 给你两棵二叉树的根节点 `p` 和 `q` ，编写一个函数来检验这两棵树是否相同。
>
> 如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。

### 226. 翻转二叉树

> 给你一棵二叉树的根节点 `root` ，翻转这棵二叉树，并返回其根节点。

### 101. 对称二叉树

> 给你一个二叉树的根节点 `root` ， 检查它是否轴对称。

### 105. 从前序和中序遍历序列构造二叉树

> 给定两个整数数组 `preorder` 和 `inorder` ，其中 `preorder` 是二叉树的 **先序遍历** ， `inorder` 是同一棵树的 **中序遍历** ，请构造二叉树并返回其根节点。

### 106. 从中序和后序遍历构造二叉树

> 给定两个整数数组 `inorder` 和 `postorder` ，其中 `inorder` 是二叉树的中序遍历， `postorder` 是同一棵树的后序遍历，请你构造并返回这颗 *二叉树* 。

### 114. 二叉树展开为链表

> 给你二叉树的根结点 `root` ，请你将它展开为一个单链表：
>
> * 展开后的单链表应该同样使用 `TreeNode` ，其中 `right` 子指针指向链表中下一个结点，而左子指针始终为 `null` 。
> * 展开后的单链表应该与二叉树 [**先序遍历**](https://baike.baidu.com/item/%E5%85%88%E5%BA%8F%E9%81%8D%E5%8E%86/6442839?fr=aladdin) 顺序相同。

### 129. 求根节点到叶节点数字之和

> 给你一个二叉树的根节点 `root` ，树中每个节点都存放有一个 `0` 到 `9` 之间的数字。每条从根节点到叶节点的路径都代表一个数字：
>
> * 例如，从根节点到叶节点的路径 `1 -> 2 -> 3` 表示数字 `123` 。
>
> 计算从根节点到叶节点生成的 **所有数字之和** 。
>
> **叶节点** 是指没有子节点的节点。

### 124. 二叉树中的最大路径和

> 二叉树中的** 路径** 被定义为一条节点序列，序列中每对相邻节点之间都存在一条边。同一个节点在一条路径序列中 **至多出现一次** 。该路径** 至少包含一个 **节点，且不一定经过根节点。
>
> **路径和** 是路径中各节点值的总和。
>
> 给你一个二叉树的根节点 `root` ，返回其 **最大路径和** 。

### 173. （没做，不想做）二叉搜索树迭代器

> 实现一个二叉搜索树迭代器类 `BSTIterator` ，表示一个按中序遍历二叉搜索树（BST）的迭代器：* `BSTIterator(TreeNode root)` 初始化 `BSTIterator` 类的一个对象。BST 的根节点 `root` 会作为构造函数的一部分给出。指针应初始化为一个不存在于 BST 中的数字，且该数字小于 BST 中的任何元素。
>
> * `boolean hasNext()` 如果向指针右侧遍历存在数字，则返回 `true` ；否则返回 `false` 。
> * `int next()`将指针向右移动，然后返回指针处的数字。
>
> 注意，指针初始化为一个不存在于 BST 中的数字，所以对 `next()` 的首次调用将返回 BST 中的最小元素。
>
> 你可以假设 `next()` 调用总是有效的，也就是说，当调用 `next()` 时，BST 的中序遍历中至少存在一个下一个数字。

### 222. 完全二叉树的节点个数

> 给你一棵** 完全二叉树** 的根节点 `root` ，求出该树的节点个数。
>
> [完全二叉树](https://baike.baidu.com/item/%E5%AE%8C%E5%85%A8%E4%BA%8C%E5%8F%89%E6%A0%91/7773232?fr=aladdin) 的定义如下：在完全二叉树中，除了最底层节点可能没填满外，其余每层节点数都达到最大值，并且最下面一层的节点都集中在该层最左边的若干位置。若最底层为第 `h` 层，则该层包含 `1~ 2<sup>h</sup>` 个节点。

### 236. 二叉树的最近公共祖先

> 给定一个二叉树, 找到该树中两个指定节点的最近公共祖先。
>
> [百度百科](https://baike.baidu.com/item/%E6%9C%80%E8%BF%91%E5%85%AC%E5%85%B1%E7%A5%96%E5%85%88/8918834?fr=aladdin)中最近公共祖先的定义为：“对于有根树 T 的两个节点 p、q，最近公共祖先表示为一个节点 x，满足 x 是 p、q 的祖先且 x 的深度尽可能大（ **一个节点也可以是它自己的祖先** ）。”
