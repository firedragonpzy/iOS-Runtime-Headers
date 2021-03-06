/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoTileViewController : UIViewController <PLPhotoTileCloudPlaceholderViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    PHCachingImageManager * __cachingImageManager;
    UIView * __customCenterOverlay;
    BOOL  _allowZoomToFill;
    unsigned int  _autoZooming;
    unsigned int  _avalancheBadgeShouldBeHidden;
    unsigned int  _badgeShouldBeVisible;
    float  _badgeViewOptimalLayoutLowestTop;
    BOOL  _centerContentVertically;
    BOOL  _clientIsTemporarilyWallpaper;
    PLTileContainerView * _containerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cropOverlayRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cropRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cropRectBeforeDragging;
    float  _cropRectZoomScale;
    BOOL  _currentTileDownloadFinished;
    NSArray * _customCenterOverlayConstraints;
    id /* block */  _didEndZoomingBlock;
    unsigned int  _didRequestFullSizeImage;
    double  _dispatchStartTime;
    double  _dispatchTimeElapsed;
    NSObject<OS_dispatch_source> * _dispatchTimer;
    UIGestureRecognizer * _doubleTapGestureRecognizer;
    float  _doubleTapZoomScale;
    BOOL  _force1XCroppedImage;
    BOOL  _forceNativeScreenScale;
    int  _fullSizeImageRequestID;
    UIImageView * _gradientView;
    BOOL  _hasNotedZoom;
    unsigned int  _ignoreZoomChange;
    UIImage * _image;
    unsigned int  _imageIsThumbnail;
    int  _imageOrientation;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    PLExpandableImageView * _imageView;
    BOOL  _isLoadingFullSizeImage;
    unsigned int  _isTVOut;
    unsigned int  _lockedUnderCropOverlay;
    float  _minZoomScale;
    int  _mode;
    PHAsset * _modelPhoto;
    id  _orientationDelegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _overlayInsets;
    UIImage * _pendingImage;
    BOOL  _picked;
    UIView<PLTilePlaceholderView> * _placeholderView;
    UIImageView * _reviewCheckmarkImageView;
    BOOL  _reviewing;
    PLImageScrollView * _scrollView;
    BOOL  _shouldHideProgressIndicator;
    BOOL  _shouldSupressViewWillTransitionToSize;
    BOOL  _shouldUpdateBadgeViewOptimalLayout;
    UIGestureRecognizer * _singleTapGestureRecognizer;
    <PLPhotoTileViewControllerDelegate> * _tileDelegate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _tileFrame;
    unsigned int  _tileParentIsPageController;
    UIImage * _unscaledImage;
    BOOL  _useLessThanMinZoomForZoomedOutTest;
    unsigned int  _useZoomScaleForCropRect;
    BOOL  _userDidAdjustWallpaper;
    unsigned int  _userDidZoom;
    PLVideoView * _videoView;
    unsigned int  _viewDidAppear;
    unsigned int  _viewWillAppear;
    float  _wallpaperLandscapeZoomScale;
    float  _wallpaperPortraitZoomScale;
    BOOL  _wantsCompactLayout;
    unsigned int  _zoomGesturesEnabled;
    float  _zoomScaleBeforeZooming;
    BOOL  _zoomToFillInsteadOfToFit;
    float  _zoomToFillScale;
    unsigned int  _zooming;
}

@property (setter=_setCustomCenterOverlay:, nonatomic, retain) UIView *_customCenterOverlay;
@property (nonatomic) BOOL centerContentVertically;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL force1XCroppedImage;
@property (nonatomic) BOOL forceNativeScreenScale;
@property (readonly) unsigned int hash;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } overlayInsets;
@property (nonatomic, readonly) PHAsset *photo;
@property (nonatomic) BOOL picked;
@property (nonatomic) BOOL reviewing;
@property (nonatomic) BOOL shouldHideProgressIndicator;
@property (nonatomic) BOOL shouldSupressViewWillTransitionToSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnailImage;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } tileFrame;
@property (nonatomic, retain) UIImage *unscaledImage;
@property (nonatomic) BOOL wantsCompactLayout;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(int)arg4;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageRef:(struct CGImage { }*)arg2 imageOrientation:(int)arg3 allowZoomToFill:(BOOL)arg4 mode:(int)arg5;
+ (id)newPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 modelPhoto:(id)arg2 mode:(int)arg3;
+ (BOOL)shouldShowPlaceholderForAsset:(id)arg1;
+ (struct CGSize { float x1; float x2; })tileSize;
+ (struct CGSize { float x1; float x2; })tvOutTileSize;

- (void)_adjustScrollViewContentOffsetForInsets;
- (void)_adjustZoomForEnteringMode:(BOOL)arg1;
- (float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2;
- (void)_centerImageInScrollView;
- (BOOL)_clientIsWallpaper;
- (void)_configureViews;
- (id)_customCenterOverlay;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleFullSizeImageRequestResult:(id)arg1 dataUTI:(id)arg2 orientation:(int)arg3;
- (void)_handleSingleTap:(id)arg1;
- (int)_imageOrientation;
- (void)_installSubview:(id)arg1;
- (id)_newOriginalImageForPickerFromCachedData;
- (void)_performDidEndZoomBlock;
- (void)_performRotationUpdatesWithDuration:(double)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_removePlaceholderView;
- (void)_repositionBadgeView;
- (void)_requestFullSizeImage;
- (void)_resetZoomCommon;
- (void)_setCustomCenterOverlay:(id)arg1;
- (void)_setDefaultZoomScale;
- (void)_setDidEndZoomingBlock:(id /* block */)arg1;
- (void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2 preserveFrame:(BOOL)arg3;
- (void)_setPhoto:(id)arg1;
- (void)_setupBadgeView;
- (void)_setupReviewCheckmark;
- (void)_showBadgeViewIfAppropriate;
- (void)_teardownDispatchTimer;
- (void)_updateAggdKeys;
- (void)_updateContentInset;
- (void)_updateModelPhotoWithImage:(id)arg1;
- (void)_updatePlaceholderImageRect;
- (void)_updatePlaceholderViewAnimated:(BOOL)arg1;
- (void)_updatePlaceholderVisibility;
- (void)_updateReviewCheckmark;
- (void)_updateSubviewOrdering;
- (void)_updateVideoViewForModelPhoto;
- (void)_viewWillMoveToSuperView:(id)arg1;
- (BOOL)allowsEditing;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)cachingImageManager;
- (void)cancelFullSizeImageRequest;
- (BOOL)centerContentVertically;
- (float)currentToDefaultZoomRatio;
- (float)currentToMinZoomRatio;
- (void)dealloc;
- (float)defaultZoomScale;
- (id)description;
- (id)dictionaryWithCroppedImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 minimalCropDimension:(float)arg2 withOptions:(int)arg3;
- (void)didLoadImage;
- (void)didMoveToParentViewController:(id)arg1;
- (void)ensureFullSizeImageLoaded;
- (id)expandableImageView;
- (BOOL)force1XCroppedImage;
- (BOOL)forceNativeScreenScale;
- (void)forceZoomingGesturesEnabled;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gesturesEnabled;
- (BOOL)hasFullSizeImage;
- (void)hideContentView;
- (id)image;
- (int)imageOrientation;
- (id)imageView;
- (id)init;
- (id)initForPageController;
- (id)initWithModelPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 isThumbnail:(BOOL)arg4 imageOrientation:(int)arg5 allowZoomToFill:(BOOL)arg6 mode:(int)arg7;
- (id)initWithModelPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)installVideoOverlay:(id)arg1;
- (BOOL)isTVOut;
- (BOOL)isZoomedOut;
- (void)loadView;
- (float)minRotatedScale;
- (float)minZoomScale;
- (id)newCGImageBackedUIImage;
- (id)newImageWithCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 minimalCropDimension:(float)arg2 croppedImageData:(id*)arg3 fullScreenImageData:(id*)arg4 fullScreenImage:(struct CGImage {}**)arg5 imageCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg6 intersectCropWithFullRect:(BOOL)arg7;
- (void)noteParentViewControllerDidDisappear;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })overlayInsets;
- (id)photo;
- (BOOL)photoShouldHaveAvalancheBadge;
- (BOOL)photoShouldHaveHDRBadge;
- (BOOL)picked;
- (void)refreshTileWithFullScreenImage:(id)arg1 modelPhoto:(id)arg2;
- (void)resetZoom;
- (void)retryDownload;
- (BOOL)reviewing;
- (id)scrollView;
- (struct CGSize { float x1; float x2; })scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(struct CGSize { float x1; float x2; })arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setAllowsZoomToFill:(BOOL)arg1;
- (void)setAvalancheBadgesHidden:(BOOL)arg1;
- (void)setBadgeVisible:(BOOL)arg1;
- (void)setBadgeVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCenterContentVertically:(BOOL)arg1;
- (void)setClientIsWallpaper:(BOOL)arg1;
- (void)setCropOverlayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setForce1XCroppedImage:(BOOL)arg1;
- (void)setForceNativeScreenScale:(BOOL)arg1;
- (void)setFullSizeImage:(id)arg1;
- (void)setGesturesEnabled:(BOOL)arg1;
- (void)setLockedUnderCropOverlay:(BOOL)arg1;
- (void)setOrientationDelegate:(id)arg1;
- (void)setOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPicked:(BOOL)arg1;
- (void)setReviewing:(BOOL)arg1;
- (void)setReviewing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldHideProgressIndicator:(BOOL)arg1;
- (void)setShouldSupressViewWillTransitionToSize:(BOOL)arg1;
- (void)setTVOut:(BOOL)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTileDelegate:(id)arg1;
- (void)setTileFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUnscaledImage:(id)arg1;
- (void)setVideoView:(id)arg1;
- (void)setWantsCompactLayout:(BOOL)arg1;
- (void)setZoomScale:(float)arg1;
- (void)setZoomingGesturesEnabled:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldHideProgressIndicator;
- (BOOL)shouldSupressViewWillTransitionToSize;
- (void)showContentView;
- (void)showErrorPlaceholderView;
- (id)thumbnailImage;
- (id)tileDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tileFrame;
- (BOOL)tileIsOnScreen;
- (id)unscaledImage;
- (void)updateAfterCollapse;
- (void)updateCenterOverlay;
- (void)updateCloudDownloadProgress:(float)arg1;
- (void)updateForVisibleOverlays:(BOOL)arg1;
- (void)updateViewConstraints;
- (void)updateZoomScales;
- (BOOL)userDidAdjustWallpaper;
- (id)videoView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsCompactLayout;
- (float)zoomToFillScale;
- (float)zoomToFitScale;
- (void)zoomToScale:(float)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;

@end
