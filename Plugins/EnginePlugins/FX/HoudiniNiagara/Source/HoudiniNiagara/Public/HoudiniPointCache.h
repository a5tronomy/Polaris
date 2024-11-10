#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniPointCacheFileType.h"
#include "PointIndexes.h"
#include "HoudiniPointCache.generated.h"

UCLASS(BlueprintType)
class HOUDININIAGARA_API UHoudiniPointCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString Filename;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumberOfSamples;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumberOfAttributes;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumberOfPoints;
    
    UPROPERTY(VisibleAnywhere)
    int32 NumberOfFrames;
    
    UPROPERTY(VisibleAnywhere)
    float FirstFrame;
    
    UPROPERTY(VisibleAnywhere)
    float LastFrame;
    
    UPROPERTY(VisibleAnywhere)
    float MinSampleTime;
    
    UPROPERTY(VisibleAnywhere)
    float MaxSampleTime;
    
    UPROPERTY(EditAnywhere)
    FString SourceCSVTitleRow;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> AttributeArray;
    
private:
    UPROPERTY()
    TArray<float> FloatSampleData;
    
    UPROPERTY()
    TArray<float> SpawnTimes;
    
    UPROPERTY()
    TArray<float> LifeValues;
    
    UPROPERTY()
    TArray<int32> PointTypes;
    
    UPROPERTY()
    TArray<int32> SpecialAttributeIndexes;
    
    UPROPERTY()
    TArray<FPointIndexes> PointValueIndexes;
    
    UPROPERTY()
    bool UseCustomCSVTitleRow;
    
    UPROPERTY()
    EHoudiniPointCacheFileType FileType;
    
public:
    UHoudiniPointCache();

    UFUNCTION(BlueprintCallable)
    void SetUseCustomCSVTitleRow(bool bInUseCustomCSVTitleRow);
    
    UFUNCTION(BlueprintPure)
    bool GetVelocityValue(const int32& SampleIndex, FVector& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVectorValueForString(const int32& SampleIndex, const FString& Attribute, FVector& Value, const bool& DoSwap, const bool& DoScale) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVectorValue(const int32& SampleIndex, const int32& attrIndex, FVector& Value, const bool& DoSwap, const bool& DoScale) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVector4ValueForString(const int32& SampleIndex, const FString& Attribute, FVector4& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetVector4Value(const int32& SampleIndex, const int32& attrIndex, FVector4& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetUseCustomCSVTitleRow() const;
    
    UFUNCTION(BlueprintPure)
    bool GetTimeValue(const int32& SampleIndex, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetSpecialAttributeIndexes() const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetSpawnTimes() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSampleIndexesForPointAtTime(const int32& POINTID, const float& desiredTime, int32& PrevSampleIndex, int32& NextSampleIndex, float& PrevWeight) const;
    
    UFUNCTION(BlueprintPure)
    bool GetQuatValueForString(const int32& SampleIndex, const FString& Attribute, FQuat& Value, const bool& DoHoudiniToUnrealConversion) const;
    
    UFUNCTION(BlueprintPure)
    bool GetQuatValue(const int32& SampleIndex, const int32& attrIndex, FQuat& Value, const bool& DoHoudiniToUnrealConversion) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPositionValue(const int32& SampleIndex, FVector& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointVectorValueAtTimeForString(int32 POINTID, const FString& Attribute, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointVectorValueAtTime(int32 POINTID, int32 AttributeIndex, float desiredTime, FVector& Vector, bool DoSwap, bool DoScale) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointVector4ValueAtTimeForString(int32 POINTID, const FString& Attribute, float desiredTime, FVector4& Vector) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointVector4ValueAtTime(int32 POINTID, int32 AttributeIndex, float desiredTime, FVector4& Vector) const;
    
    UFUNCTION()
    TArray<FPointIndexes> GetPointValueIndexes() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointValueAtTimeForString(const int32& POINTID, const FString& Attribute, const float& desiredTime, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointValueAtTime(const int32& POINTID, const int32& AttributeIndex, const float& desiredTime, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    TArray<int32> GetPointTypes() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointType(const int32& POINTID, int32& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointQuatValueAtTimeForString(int32 POINTID, const FString& Attribute, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointQuatValueAtTime(int32 POINTID, int32 AttributeIndex, float desiredTime, FQuat& Quat, bool DoHoudiniToUnrealConversion) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointPositionAtTime(const int32& POINTID, const float& desiredTime, FVector& Vector) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointLifeAtTime(const int32& POINTID, const float& desiredTime, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointLife(const int32& POINTID, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointInt32ValueAtTime(int32 POINTID, int32 AttributeIndex, float desiredTime, int32& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointIDsToSpawnAtTime(const float& desiredTime, int32& MinID, int32& MaxID, int32& Count, int32& LastSpawnedPointID, float& LastSpawnTime, float& LastSpawnTimeRequest) const;
    
    UFUNCTION(BlueprintPure)
    bool GetPointFloatValueAtTime(int32 POINTID, int32 AttributeIndex, float desiredTime, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSamples() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfPoints() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfAttributes() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNormalValue(const int32& SampleIndex, FVector& Value) const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetLifeValues() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLastSampleIndexAtTime(const float& desiredTime, int32& lastSampleIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool GetLastPointIDToSpawnAtTime(const float& Time, int32& lastID) const;
    
    UFUNCTION(BlueprintPure)
    bool GetImpulseValue(const int32& SampleIndex, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFloatValueForString(const int32& SampleIndex, const FString& Attribute, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    bool GetFloatValue(const int32& SampleIndex, const int32& attrIndex, float& Value) const;
    
    UFUNCTION(BlueprintPure)
    TArray<float> GetFloatSampleData() const;
    
    UFUNCTION(BlueprintPure)
    bool GetColorValue(const int32& SampleIndex, FLinearColor& Value) const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetAttributeIndexInArrayFromString(const FString& InAttribute, const TArray<FString>& InAttributeArray, int32& OutAttributeIndex);
    
    UFUNCTION(BlueprintPure)
    bool GetAttributeIndexFromString(const FString& Attribute, int32& AttributeIndex) const;
    
};

