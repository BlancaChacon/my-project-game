#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000016 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x0000001B System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000020 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000021 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000025 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000026 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000029 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000002A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000033 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000048 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000004A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000050 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000051 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000052 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000053 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000054 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000055 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000059 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000060 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000061 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000062 System.Void System.Linq.Set`1::Resize()
// 0x00000063 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000064 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000065 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000066 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000068 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000006A System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000006B System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000006C TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000006D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006E System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006F System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000070 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x00000072 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x00000073 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000074 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000076 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000077 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000078 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000079 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x0000007A TElement[] System.Linq.Buffer`1::ToArray()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x0000007C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000081 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000082 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000083 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000084 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000085 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000086 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000008A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000091 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000092 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000095 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000096 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000097 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x00000098 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x00000099 T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[153] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[153] = 
{
	4237,
	4237,
	4390,
	4390,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[51] = 
{
	{ 0x02000004, { 77, 4 } },
	{ 0x02000005, { 81, 9 } },
	{ 0x02000006, { 92, 7 } },
	{ 0x02000007, { 101, 10 } },
	{ 0x02000008, { 113, 11 } },
	{ 0x02000009, { 127, 9 } },
	{ 0x0200000A, { 139, 12 } },
	{ 0x0200000B, { 154, 1 } },
	{ 0x0200000C, { 155, 2 } },
	{ 0x0200000D, { 157, 12 } },
	{ 0x0200000E, { 169, 11 } },
	{ 0x02000010, { 180, 8 } },
	{ 0x02000012, { 188, 3 } },
	{ 0x02000013, { 193, 5 } },
	{ 0x02000014, { 198, 7 } },
	{ 0x02000015, { 205, 3 } },
	{ 0x02000016, { 208, 7 } },
	{ 0x02000017, { 215, 4 } },
	{ 0x02000018, { 219, 21 } },
	{ 0x0200001A, { 240, 2 } },
	{ 0x0200001B, { 242, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 3 } },
	{ 0x06000010, { 42, 2 } },
	{ 0x06000011, { 44, 4 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 4 } },
	{ 0x06000014, { 55, 3 } },
	{ 0x06000015, { 58, 3 } },
	{ 0x06000016, { 61, 1 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 3 } },
	{ 0x0600001A, { 70, 2 } },
	{ 0x0600001B, { 72, 5 } },
	{ 0x0600002B, { 90, 2 } },
	{ 0x06000030, { 99, 2 } },
	{ 0x06000035, { 111, 2 } },
	{ 0x0600003B, { 124, 3 } },
	{ 0x06000040, { 136, 3 } },
	{ 0x06000045, { 151, 3 } },
	{ 0x06000067, { 191, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[244] = 
{
	{ (Il2CppRGCTXDataType)2, 1982 },
	{ (Il2CppRGCTXDataType)3, 7731 },
	{ (Il2CppRGCTXDataType)2, 3388 },
	{ (Il2CppRGCTXDataType)2, 2910 },
	{ (Il2CppRGCTXDataType)3, 15694 },
	{ (Il2CppRGCTXDataType)2, 2104 },
	{ (Il2CppRGCTXDataType)2, 2917 },
	{ (Il2CppRGCTXDataType)3, 15733 },
	{ (Il2CppRGCTXDataType)2, 2912 },
	{ (Il2CppRGCTXDataType)3, 15701 },
	{ (Il2CppRGCTXDataType)2, 1983 },
	{ (Il2CppRGCTXDataType)3, 7732 },
	{ (Il2CppRGCTXDataType)2, 3411 },
	{ (Il2CppRGCTXDataType)2, 2919 },
	{ (Il2CppRGCTXDataType)3, 15740 },
	{ (Il2CppRGCTXDataType)2, 2124 },
	{ (Il2CppRGCTXDataType)2, 2927 },
	{ (Il2CppRGCTXDataType)3, 15797 },
	{ (Il2CppRGCTXDataType)2, 2923 },
	{ (Il2CppRGCTXDataType)3, 15766 },
	{ (Il2CppRGCTXDataType)2, 703 },
	{ (Il2CppRGCTXDataType)3, 56 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)3, 5881 },
	{ (Il2CppRGCTXDataType)2, 704 },
	{ (Il2CppRGCTXDataType)3, 68 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 1287 },
	{ (Il2CppRGCTXDataType)3, 5885 },
	{ (Il2CppRGCTXDataType)3, 18353 },
	{ (Il2CppRGCTXDataType)2, 709 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 2586 },
	{ (Il2CppRGCTXDataType)3, 12661 },
	{ (Il2CppRGCTXDataType)3, 6457 },
	{ (Il2CppRGCTXDataType)3, 18322 },
	{ (Il2CppRGCTXDataType)2, 705 },
	{ (Il2CppRGCTXDataType)3, 74 },
	{ (Il2CppRGCTXDataType)2, 816 },
	{ (Il2CppRGCTXDataType)3, 1120 },
	{ (Il2CppRGCTXDataType)3, 1121 },
	{ (Il2CppRGCTXDataType)2, 2105 },
	{ (Il2CppRGCTXDataType)3, 8390 },
	{ (Il2CppRGCTXDataType)2, 1906 },
	{ (Il2CppRGCTXDataType)2, 1436 },
	{ (Il2CppRGCTXDataType)2, 1558 },
	{ (Il2CppRGCTXDataType)2, 1659 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)2, 1660 },
	{ (Il2CppRGCTXDataType)3, 5883 },
	{ (Il2CppRGCTXDataType)2, 1907 },
	{ (Il2CppRGCTXDataType)2, 1437 },
	{ (Il2CppRGCTXDataType)2, 1560 },
	{ (Il2CppRGCTXDataType)2, 1661 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)2, 1662 },
	{ (Il2CppRGCTXDataType)3, 5884 },
	{ (Il2CppRGCTXDataType)2, 1905 },
	{ (Il2CppRGCTXDataType)2, 1557 },
	{ (Il2CppRGCTXDataType)2, 1658 },
	{ (Il2CppRGCTXDataType)2, 1547 },
	{ (Il2CppRGCTXDataType)2, 1548 },
	{ (Il2CppRGCTXDataType)2, 1655 },
	{ (Il2CppRGCTXDataType)3, 5880 },
	{ (Il2CppRGCTXDataType)2, 1435 },
	{ (Il2CppRGCTXDataType)2, 1555 },
	{ (Il2CppRGCTXDataType)2, 1556 },
	{ (Il2CppRGCTXDataType)2, 1657 },
	{ (Il2CppRGCTXDataType)3, 5882 },
	{ (Il2CppRGCTXDataType)2, 1434 },
	{ (Il2CppRGCTXDataType)3, 18309 },
	{ (Il2CppRGCTXDataType)3, 5177 },
	{ (Il2CppRGCTXDataType)2, 1151 },
	{ (Il2CppRGCTXDataType)2, 1550 },
	{ (Il2CppRGCTXDataType)2, 1656 },
	{ (Il2CppRGCTXDataType)2, 1741 },
	{ (Il2CppRGCTXDataType)3, 7733 },
	{ (Il2CppRGCTXDataType)3, 7735 },
	{ (Il2CppRGCTXDataType)2, 497 },
	{ (Il2CppRGCTXDataType)3, 7734 },
	{ (Il2CppRGCTXDataType)3, 7743 },
	{ (Il2CppRGCTXDataType)2, 1986 },
	{ (Il2CppRGCTXDataType)2, 2913 },
	{ (Il2CppRGCTXDataType)3, 15702 },
	{ (Il2CppRGCTXDataType)3, 7744 },
	{ (Il2CppRGCTXDataType)2, 1604 },
	{ (Il2CppRGCTXDataType)2, 1687 },
	{ (Il2CppRGCTXDataType)3, 5892 },
	{ (Il2CppRGCTXDataType)3, 18295 },
	{ (Il2CppRGCTXDataType)2, 2924 },
	{ (Il2CppRGCTXDataType)3, 15767 },
	{ (Il2CppRGCTXDataType)3, 7736 },
	{ (Il2CppRGCTXDataType)2, 1985 },
	{ (Il2CppRGCTXDataType)2, 2911 },
	{ (Il2CppRGCTXDataType)3, 15695 },
	{ (Il2CppRGCTXDataType)3, 5891 },
	{ (Il2CppRGCTXDataType)3, 7737 },
	{ (Il2CppRGCTXDataType)3, 18294 },
	{ (Il2CppRGCTXDataType)2, 2920 },
	{ (Il2CppRGCTXDataType)3, 15741 },
	{ (Il2CppRGCTXDataType)3, 7750 },
	{ (Il2CppRGCTXDataType)2, 1987 },
	{ (Il2CppRGCTXDataType)2, 2918 },
	{ (Il2CppRGCTXDataType)3, 15734 },
	{ (Il2CppRGCTXDataType)3, 8444 },
	{ (Il2CppRGCTXDataType)3, 4144 },
	{ (Il2CppRGCTXDataType)3, 5893 },
	{ (Il2CppRGCTXDataType)3, 4143 },
	{ (Il2CppRGCTXDataType)3, 7751 },
	{ (Il2CppRGCTXDataType)3, 18296 },
	{ (Il2CppRGCTXDataType)2, 2928 },
	{ (Il2CppRGCTXDataType)3, 15798 },
	{ (Il2CppRGCTXDataType)3, 7764 },
	{ (Il2CppRGCTXDataType)2, 1989 },
	{ (Il2CppRGCTXDataType)2, 2926 },
	{ (Il2CppRGCTXDataType)3, 15769 },
	{ (Il2CppRGCTXDataType)3, 7765 },
	{ (Il2CppRGCTXDataType)2, 1607 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)3, 5897 },
	{ (Il2CppRGCTXDataType)3, 5896 },
	{ (Il2CppRGCTXDataType)2, 2915 },
	{ (Il2CppRGCTXDataType)3, 15704 },
	{ (Il2CppRGCTXDataType)3, 18303 },
	{ (Il2CppRGCTXDataType)2, 2925 },
	{ (Il2CppRGCTXDataType)3, 15768 },
	{ (Il2CppRGCTXDataType)3, 7757 },
	{ (Il2CppRGCTXDataType)2, 1988 },
	{ (Il2CppRGCTXDataType)2, 2922 },
	{ (Il2CppRGCTXDataType)3, 15743 },
	{ (Il2CppRGCTXDataType)3, 5895 },
	{ (Il2CppRGCTXDataType)3, 5894 },
	{ (Il2CppRGCTXDataType)3, 7758 },
	{ (Il2CppRGCTXDataType)2, 2914 },
	{ (Il2CppRGCTXDataType)3, 15703 },
	{ (Il2CppRGCTXDataType)3, 18302 },
	{ (Il2CppRGCTXDataType)2, 2921 },
	{ (Il2CppRGCTXDataType)3, 15742 },
	{ (Il2CppRGCTXDataType)3, 7771 },
	{ (Il2CppRGCTXDataType)2, 1990 },
	{ (Il2CppRGCTXDataType)2, 2930 },
	{ (Il2CppRGCTXDataType)3, 15800 },
	{ (Il2CppRGCTXDataType)3, 8445 },
	{ (Il2CppRGCTXDataType)3, 4146 },
	{ (Il2CppRGCTXDataType)3, 5899 },
	{ (Il2CppRGCTXDataType)3, 5898 },
	{ (Il2CppRGCTXDataType)3, 4145 },
	{ (Il2CppRGCTXDataType)3, 7772 },
	{ (Il2CppRGCTXDataType)2, 2916 },
	{ (Il2CppRGCTXDataType)3, 15705 },
	{ (Il2CppRGCTXDataType)3, 18304 },
	{ (Il2CppRGCTXDataType)2, 2929 },
	{ (Il2CppRGCTXDataType)3, 15799 },
	{ (Il2CppRGCTXDataType)3, 5888 },
	{ (Il2CppRGCTXDataType)3, 5889 },
	{ (Il2CppRGCTXDataType)3, 5900 },
	{ (Il2CppRGCTXDataType)3, 105 },
	{ (Il2CppRGCTXDataType)3, 104 },
	{ (Il2CppRGCTXDataType)2, 1599 },
	{ (Il2CppRGCTXDataType)2, 1683 },
	{ (Il2CppRGCTXDataType)3, 5890 },
	{ (Il2CppRGCTXDataType)2, 1613 },
	{ (Il2CppRGCTXDataType)2, 1702 },
	{ (Il2CppRGCTXDataType)3, 107 },
	{ (Il2CppRGCTXDataType)2, 636 },
	{ (Il2CppRGCTXDataType)2, 710 },
	{ (Il2CppRGCTXDataType)3, 103 },
	{ (Il2CppRGCTXDataType)3, 106 },
	{ (Il2CppRGCTXDataType)3, 76 },
	{ (Il2CppRGCTXDataType)2, 2699 },
	{ (Il2CppRGCTXDataType)3, 14457 },
	{ (Il2CppRGCTXDataType)2, 1596 },
	{ (Il2CppRGCTXDataType)2, 1681 },
	{ (Il2CppRGCTXDataType)3, 14458 },
	{ (Il2CppRGCTXDataType)3, 78 },
	{ (Il2CppRGCTXDataType)2, 494 },
	{ (Il2CppRGCTXDataType)2, 706 },
	{ (Il2CppRGCTXDataType)3, 75 },
	{ (Il2CppRGCTXDataType)3, 77 },
	{ (Il2CppRGCTXDataType)3, 5210 },
	{ (Il2CppRGCTXDataType)2, 1165 },
	{ (Il2CppRGCTXDataType)2, 3515 },
	{ (Il2CppRGCTXDataType)3, 14454 },
	{ (Il2CppRGCTXDataType)3, 14455 },
	{ (Il2CppRGCTXDataType)2, 1755 },
	{ (Il2CppRGCTXDataType)3, 14456 },
	{ (Il2CppRGCTXDataType)2, 428 },
	{ (Il2CppRGCTXDataType)2, 707 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)3, 12648 },
	{ (Il2CppRGCTXDataType)2, 2587 },
	{ (Il2CppRGCTXDataType)3, 12662 },
	{ (Il2CppRGCTXDataType)2, 817 },
	{ (Il2CppRGCTXDataType)3, 1122 },
	{ (Il2CppRGCTXDataType)3, 12654 },
	{ (Il2CppRGCTXDataType)3, 4118 },
	{ (Il2CppRGCTXDataType)2, 528 },
	{ (Il2CppRGCTXDataType)3, 12649 },
	{ (Il2CppRGCTXDataType)2, 2583 },
	{ (Il2CppRGCTXDataType)3, 1158 },
	{ (Il2CppRGCTXDataType)2, 831 },
	{ (Il2CppRGCTXDataType)2, 1123 },
	{ (Il2CppRGCTXDataType)3, 4124 },
	{ (Il2CppRGCTXDataType)3, 12650 },
	{ (Il2CppRGCTXDataType)3, 4113 },
	{ (Il2CppRGCTXDataType)3, 4114 },
	{ (Il2CppRGCTXDataType)3, 4112 },
	{ (Il2CppRGCTXDataType)3, 4115 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)2, 3474 },
	{ (Il2CppRGCTXDataType)3, 5887 },
	{ (Il2CppRGCTXDataType)3, 4117 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)3, 4116 },
	{ (Il2CppRGCTXDataType)2, 1438 },
	{ (Il2CppRGCTXDataType)2, 3414 },
	{ (Il2CppRGCTXDataType)2, 1574 },
	{ (Il2CppRGCTXDataType)2, 1663 },
	{ (Il2CppRGCTXDataType)3, 5193 },
	{ (Il2CppRGCTXDataType)2, 1159 },
	{ (Il2CppRGCTXDataType)3, 6293 },
	{ (Il2CppRGCTXDataType)3, 6294 },
	{ (Il2CppRGCTXDataType)3, 6299 },
	{ (Il2CppRGCTXDataType)2, 1750 },
	{ (Il2CppRGCTXDataType)3, 6296 },
	{ (Il2CppRGCTXDataType)3, 18815 },
	{ (Il2CppRGCTXDataType)2, 1125 },
	{ (Il2CppRGCTXDataType)3, 4136 },
	{ (Il2CppRGCTXDataType)1, 1525 },
	{ (Il2CppRGCTXDataType)2, 3429 },
	{ (Il2CppRGCTXDataType)3, 6295 },
	{ (Il2CppRGCTXDataType)1, 3429 },
	{ (Il2CppRGCTXDataType)1, 1750 },
	{ (Il2CppRGCTXDataType)2, 3513 },
	{ (Il2CppRGCTXDataType)2, 3429 },
	{ (Il2CppRGCTXDataType)3, 6300 },
	{ (Il2CppRGCTXDataType)3, 6298 },
	{ (Il2CppRGCTXDataType)3, 6297 },
	{ (Il2CppRGCTXDataType)2, 357 },
	{ (Il2CppRGCTXDataType)3, 4147 },
	{ (Il2CppRGCTXDataType)2, 507 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)2, 3431 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	153,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	51,
	s_rgctxIndices,
	244,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
