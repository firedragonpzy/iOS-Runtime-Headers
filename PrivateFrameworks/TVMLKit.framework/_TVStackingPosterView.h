/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackingPosterView : UIView <TVAuxiliaryViewSelecting> {
    _TVAnimatedLabel * _animatedLabel;
    float  _bottomAnchorConstant;
    NSLayoutConstraint * _bottomAnchorConstraint;
    float  _bottomImageConstant;
    NSLayoutConstraint * _bottomImageConstraint;
    struct TVCellMetrics { 
        struct CGSize { 
            float width; 
            float height; 
        } cellSize; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellPadding; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellInset; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellInsetAlt; 
        struct UIEdgeInsets { 
            float top; 
            float left; 
            float bottom; 
            float right; 
        } cellMargin; 
    }  _cellMetrics;
    NSArray * _components;
    BOOL  _configuresForCollectionViewCell;
    NSArray * _filteredComponents;
    NSArray * _labelWidthConstraints;
    float  _labelWidthExpansionAmount;
    UIView * _mainImageComponent;
    NSArray * _marqueeLabels;
    struct CGSize { 
        float width; 
        float height; 
    }  _maxBoundsSize;
    UIView * _overlayView;
    BOOL  _requiresReconfiguration;
    float  _topAnchorConstant;
    NSLayoutConstraint * _topAnchorConstraint;
    float  _topImageConstant;
    NSLayoutConstraint * _topImageConstraint;
    NSArray * _visibleLabelWidths;
}

@property (nonatomic, retain) _TVAnimatedLabel *animatedLabel;
@property (nonatomic) struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; } cellMetrics;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic) BOOL configuresForCollectionViewCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filteredComponents;
@property (nonatomic) struct CGPoint { float x1; float x2; } focusDirection;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIView *mainImageComponent;
@property (nonatomic, copy) NSArray *marqueeLabels;
@property (nonatomic) struct CGSize { float x1; float x2; } maxBoundsSize;
@property (nonatomic, retain) UIView *overlayView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *visibleLabelWidths;

- (void).cxx_destruct;
- (struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; })_cellMetricsForMaxSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_commonInit;
- (void)_configureSubviews;
- (float)_labelWidthForWidth:(float)arg1 component:(id)arg2 expansionAmount:(float)arg3;
- (id)_preferredConfigurationForFocusAnimation:(int)arg1 inContext:(id)arg2;
- (void)_resetSubviews;
- (void)_updateFocusSizeIncrease;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(BOOL)arg2;
- (id)animatedLabel;
- (struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; })cellMetrics;
- (id)components;
- (BOOL)configuresForCollectionViewCell;
- (id)filteredComponents;
- (struct CGPoint { float x1; float x2; })focusDirection;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mainImageComponent;
- (id)marqueeLabels;
- (struct CGSize { float x1; float x2; })maxBoundsSize;
- (id)overlayView;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })selectionMarginsForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAnimatedLabel:(id)arg1;
- (void)setCellMetrics:(struct TVCellMetrics { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct UIEdgeInsets { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct UIEdgeInsets { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; struct UIEdgeInsets { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; } x4; struct UIEdgeInsets { float x_5_1_1; float x_5_1_2; float x_5_1_3; float x_5_1_4; } x5; })arg1;
- (void)setComponents:(id)arg1;
- (void)setConfiguresForCollectionViewCell:(BOOL)arg1;
- (void)setFilteredComponents:(id)arg1;
- (void)setFocusDirection:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFocusDirection:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setMainImageComponent:(id)arg1;
- (void)setMarqueeLabels:(id)arg1;
- (void)setMaxBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOverlayView:(id)arg1;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setVisibleLabelWidths:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })tv_alignmentInsetsForExpectedWidth:(float)arg1;
- (void)updateComponentLayout;
- (id)visibleLabelWidths;

@end
